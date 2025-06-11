#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    map<int, deque<string>> ls;
    int N;cin>>N;
    while(N--)
    {
        string s;cin>>s;
        ls[s.length()].emplace_back(s);
    }
    for(auto it = ls.rbegin(); it != ls.rend(); it++)
    {
        while(!it->second.empty())
        {
            cout<< it->second.front() <<'\n';
            it->second.pop_front();
        }
    }
    return 0;
}