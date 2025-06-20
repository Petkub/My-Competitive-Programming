#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    cin.tie(0);ios::sync_with_stdio(false);
    ll N;cin>>N;
    vector<ll> arr(N);
    for(ll &e:arr) cin>>e;
    sort(arr.rbegin(),arr.rend());
    ll mx=N/2;
    if(mx*2<N)mx++;
    ll sum=0,c=0;
    for(ll i=1;i<=mx;i++)
    {
        if(arr[c]<0) break;
        sum+=arr[c++];
    }
    cout<<sum;
    return 0;
}

// int main()
// {
//     cin.tie(nullptr);ios::sync_with_stdio(false);
//     ll N;cin>>N;
//     priority_queue<ll> pq;
//     for(ll i=1;i<=N;i++)
//     {
//         ll n;cin>>n;
//         pq.push(n);
//     }
//     ll mx=N/2;
//     if(mx*2<N) mx++;
//     ll sum=0;
//     while(mx--)
//     {
//         if(!pq.empty()&&pq.top()<0) break;
//         if(!pq.empty())
//         {
//             sum+=pq.top();pq.pop();
//         }
//     }
//     cout<<sum;
//     return 0;
// }
