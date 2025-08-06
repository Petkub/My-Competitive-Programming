#include<bits/stdc++.h>
using namespace std;

long long floor_div(long long a, long long b) {
    long long res = a / b;
    if ((a % b != 0) && ((a > 0) != (b > 0))) {
        res--;
    }
    return res;
}

long long ceil_div(long long a, long long b) {
    long long res = a / b;
    if ((a % b != 0) && ((a > 0) == (b > 0))) {
        res++;
    }
    return res;
}

long long count_less_equal(long long x, int n, vector<int>& a) {
    long long count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            if (x >= 0) {
                count += (n - 1 - i);
            }
        } else if (a[i] > 0) {
            long long target = floor_div(x, a[i]);
            auto it = upper_bound(a.begin() + i + 1, a.end(), target);
            count += distance(a.begin() + i + 1, it);
        } else {
            long long target = ceil_div(x, a[i]);
            auto it = lower_bound(a.begin() + i + 1, a.end(), target);
            count += distance(it, a.end());
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long low = -1e18 - 7; 
    long long high = 1e18 + 7; 
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (count_less_equal(mid, n, a) >= m) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}