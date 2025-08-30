#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
vector<pii> party;
vector<int> pf;
int T;

bool comp(pii a, pii b)
{
    return a.first > b.first;
}

bool check(int i, int k, int cur)
{
    int cnt;
    if (i < k)
    {
        cnt=pf[k];
    }
    else
    {
        cnt=cur+pf[k-1];
    }
    if (cnt >= T) return true;
    return false;
}

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N; cin>> N;
    party.resize(N); pf.resize(N);
    int sum=0;
    for (int i=0;i<N;i++)
    {
        int M;cin>>M;
        party[i].first=M;
        party[i].second=i;
        sum+=M;
    }
    T=sum/2+1;
    sort(party.begin(), party.end(), comp);
    
    pf[0]=party[0].first;
    for (int i=1;i<N;i++)
    {
        pf[i]=pf[i-1]+party[i].first;
    }
    vector<int> out(N);
    for(int i=0;i<N;i++)
    {
        int cur=party[i].first;
        int l=1,h=N-1,ans=h;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(check(i, mid, cur))
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        out[party[i].second]=ans;
    }
    for(int i=0;i<N;i++)
    {
        cout<<out[i]<<'\n';
    }
    return 0;
}