#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N,T,G,K; cin>>N>>T>>G>>K;
    vector<int> score1(N),score2(N-1);

    for (int i=0;i<N;i++) cin>>score1[i];
    int mx_pan = score1[N-1]+T*K;

    for(int i=0;i<N-1;i++) score2[i]=score1[i];
    sort(score2.begin(),score2.end());

    int cnt=0;
    for(int i=0;i<=(N-1)-G;i++)
    {
        cnt += (max(0LL, score2[i]-mx_pan) + K-1) / K; 
    }
    cout<< (cnt<=T? "Gold medal is mine!\n":"Time to cry forever!\n");

    return 0;
}