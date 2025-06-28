#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N, Q, T=1;
    while(cin>>N,cin>>Q && (N!=0&&Q!=0))
    {
        vector<int> v(N);
        for(int &e:v) cin>>e;
        sort(v.begin(),v.end());
        cout<<"CASE# "<<T<<":\n";
        while(Q--)
        {
            int x;cin>>x;
            auto lb=lower_bound(v.begin(),v.end(),x);
            if(lb!=v.end()&&*lb==x)
            {
                int idx=lb-v.begin();
                cout<<x<<" found at "<<idx+1<<'\n';
            }
            else
            {
                cout<<x<<" not found\n";
            }
        }
        T++;
    }
    return 0;
}

// int main()
// {
//     cin.tie(nullptr);ios::sync_with_stdio(false);
//     int N, Q, T = 1;
//     while((cin>>N,cin>>Q) && (N!=0&&Q!=0))
//     {
//         vector<int> V(N);
//         for(int &v:V) cin>>v;
//         sort(V.begin(),V.end());
//         cout<<"CASE# "<<T<<":\n";
//         for(int i=1;i<=Q;i++)
//         {
//             int n; cin>>n;
//             int l=0;
//             int h=N-1;
//             int idx=-1;
//             while(l<=h)
//             {
//                 int m=l+(h-l)/2;
//                 if(V[m]>n)
//                 {
//                     h=m-1;
//                 }
//                 else if(V[m]<n)
//                 {
//                     l=m+1;
//                 }
//                 else
//                 {
//                     idx=m;
//                     h=m-1;
//                 }
//             }
//             if(idx>=0)
//             {
//                 cout<<n<<" found at "<<idx+1<<'\n';
//             }
//             else
//             {
//                 cout<<n<<" not found\n";
//             }
//         }
//         T++;
//     }
//     return 0;
// }