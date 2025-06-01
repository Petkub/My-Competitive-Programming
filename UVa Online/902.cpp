#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n;
    string pass;
    while (cin >> n >> pass)
    {
        unordered_map<string, int> sub;
        for (size_t i = 0; i < pass.size(); i++)
        {
            string slice = pass.substr(i, n);
            sub[slice]++;
        }
        int mx = INT_MIN;
        string encode;
        for (const auto &[k, v]: sub)
        {
            if (v > mx) {mx = v; encode = k;}
        }
        cout << encode << '\n';
    }
    return 0;
}