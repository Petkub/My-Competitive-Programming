#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> qpos;
int N,cnt=0;

bool canPlace(int r, int c)
{
    for(int prow=0;prow<r;prow++)
    {
        int pcol=qpos[prow];
        if(c==pcol)return false;
        if(abs(pcol-c)==abs(prow-r))return false;
    }
    return true;
}
void solve(int row)
{
    if(row==N) {cnt++;return;}
    for(int col=0;col<N;col++)
    {
        if(canPlace(row,col))
        {
            qpos[row]=col;
            solve(row+1);
        }
    }
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cin>>N;
    qpos.resize(N);
    solve(0);
    cout<<cnt;
    return 0;
}