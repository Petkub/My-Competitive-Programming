#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int N;cin>>N;
    vector<string> vec(N);
    for(auto &s: vec) cin>>s;
    sort(vec.begin(),vec.end(),[](const string &s1, const string &s2){
        if(s1.length() != s2.length())
        {
            return s1.length() < s2.length();
        }
        return s1 < s2;
    });
    for(auto &e: vec)
    {
        cout<<e<<" ";
    }
    return 0;
}