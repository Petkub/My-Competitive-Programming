#include<bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vii=vector<vi>;
int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    vii mat(5, vi(5));
    int curC=0,curR=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int n;cin>>n;
            mat[i][j]=n;
            if(n==1)
            {
                curR=i;curC=j;
            }
        }
    }
    cout<<abs(2-curR)+abs(2-curC);
    return 0;
}