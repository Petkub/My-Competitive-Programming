#include <bits/stdc++.h>
using namespace std;

const int MAXA = 1000000;
bitset<MAXA + 1> isPrime;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPrime.set();
    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i * i <= MAXA; i++)
    {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXA; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    int n;cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cout << (isPrime[x] ? 1 : 0);
        if (i + 1 < n) cout << ' ';
    }
    return 0;
}
