#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n; cin>>n;
    string s; cin>>s;
    set<char> st;
    for(char ch: s)
    {
        st.insert(ch);
    }
    cout<<st.size();
    return 0;
}