#include<bits/stdc++.h>
using namespace std;
#define int long long
int A,B,C,D;

bool check(int x)
{
    return (A*x*x*x)+(B*x*x)+(C*x) >= D;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int Q; cin>>Q;
    for(int i=1;i<=Q;i++)
    {
        cin>>A>>B>>C>>D;
        int low = 1, high = 100000, ans = high;
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if (check(mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

