#include<bits/stdc++.h>
using namespace std;
using us = unordered_set<int>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int N, M;
    while (cin >> N >> M && (N != 0 && M != 0))
    {
        
        us jack, jill;
        jack.reserve(N * 2);
        jack.reserve(M * 2);
        for(int i=1;i<=N;i++)
        {
            int n;
            cin >> n;
            jack.insert(n);
        }
        for(int i=1;i<=M;i++)
        {
            int n;
            cin >> n;
            jill.insert(n);
        }
    
        int cnt = 0;
        for (const auto &cd: jack)
        {
            auto it = jill.find(cd);
            if (it != jill.end())
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}