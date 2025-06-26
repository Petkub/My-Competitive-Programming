#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);ios::sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> cc;
    
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        int op, x; cin >> op >> x;
        if (op == 1)
        {
            cc[x]++;
            while (cc.count(mx + 1) && cc[mx + 1] > 0) 
            {
                mx++;
            }
        }
        else
        {
            if (cc.count(x) && cc[x] > 0)
            {
                cc[x]--;
                if (x <= mx && cc[x] == 0)
                {
                    mx = x - 1;
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}