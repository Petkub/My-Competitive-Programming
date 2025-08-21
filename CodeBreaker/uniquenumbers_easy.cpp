#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    set<int> st;
    for(int i=0;i<N;i++)
    {
        int t;cin>>t;
        st.insert(t);
    }
    cout<<st.size();
}