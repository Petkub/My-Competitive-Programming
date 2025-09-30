#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    // cin.tie(0); ios::sync_with_stdio(0);
    int n,m; cin>>n>>m;
    vector<string> arr;
    int s_pt=-1,start_row=-1,last_row=-1;
    for(int row = 0;row < m; row++)
    {
        string line; cin>>line;
        arr.push_back(line);
        if(s_pt == -1)
        {
            for(int i=0;i<(int)arr[row].length();i++)
            {
                if(arr[row][i]=='#')
                {
                    s_pt=i+1;
                    start_row = row + 1;
                }
            }
        }
        else if(last_row == -1)
        {
            int cnt = 0;
            for(int i=0;i<(int)arr[row].length();i++)
            {
                if(arr[row][i]=='#') cnt++;
                if(cnt>1) break;
            }   
            if(cnt==1) last_row=row+1;
        }
    }
    // cout<<s_pt<<'\n';
    // cout<<start_row<<" "<<last_row<<'\n';
    if(last_row==-1) last_row=start_row;
    double r = (abs(start_row - last_row)+1) / 2.0;
    double area = 3.14*r*r;
    printf("%lld %lld\n", (start_row+last_row)/2, s_pt);
    printf("%.2f", area);
    return 0;
}