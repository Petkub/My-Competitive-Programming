#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <iomanip>

using namespace std;

// ฟังก์ชันตรวจสอบว่าเราสามารถทำให้ไม้ทุกท่อนยาวไม่เกิน L
// โดยใช้การตัดไม่เกิน k_cuts ครั้งได้หรือไม่
bool check(double L, int k_cuts, const vector<int>& logs) {
    long long total_cuts = 0;
    for (int log_length : logs) {
        // จำนวนครั้งที่ต้องตัดไม้ท่อนนี้คือ ceil(log_length / L) - 1
        // ซึ่งเท่ากับการคำนวณแบบจำนวนเต็มคือ (log_length - 1) / L
        // แต่เพื่อความแม่นยำกับทศนิยม เราใช้ ceil
        total_cuts += static_cast<long long>(ceil(log_length / L)) - 1;
    }
    return total_cuts <= k_cuts;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    double low = 0.0;
    double high = 1e9 + 7; // ค่าสูงสุดที่เป็นไปได้ของความยาวไม้

    // Binary search บนคำตอบที่เป็นทศนิยม
    // ทำซ้ำ 100 ครั้งก็เพียงพอสำหรับความแม่นยำในการแข่งขัน
    for (int i = 0; i < 100; ++i) {
        double mid = low + (high - low) / 2.0;
        if (mid <= 0) { // ป้องกันการหารด้วยศูนย์หรือค่าน้อยมากๆ
            low = 1e-9; // เลื่อน low ไปเล็กน้อย
            continue;
        }

        if (check(mid, k, a)) {
            // ถ้าทำได้ ลองหาคำตอบที่สั้นกว่านี้
            high = mid;
        } else {
            // ถ้าทำไม่ได้ ต้องใช้ความยาวที่มากขึ้น
            low = mid;
        }
    }

    // โจทย์ต้องการคำตอบที่ปัดขึ้นเป็นจำนวนเต็ม
    cout << static_cast<long long>(ceil(high)) << endl;

    return 0;
}