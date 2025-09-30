#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin>>n;
    int w = n * 2 - 1;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<w;k++)
            {
                if(j==0)
                {
                    char ch = ('A'+n-1-i);
                    if(k==i or k==w-i-1)
                    {
                        if(ch<'A')
                        {
                            ch = 2*'A'-ch; cout<<ch;
                        }
                        else cout<<ch;
                    }
                    else cout<<" ";
                }
                else
                {
                    if(k==i) cout<<"*";
                    else if(k==w-i-1) cout<<"*";
                    else cout<<" ";
                }
            }
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}