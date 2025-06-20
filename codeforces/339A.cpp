#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string exp;
    cin>>exp;
    vector<int> n;
    for(size_t i=0;i<exp.length();i++)
    {
        if(exp[i]!='+')
        {
            n.push_back(exp[i]);
        }
    }
    sort(n.begin(),n.end());
    int cn=0;
    int sz=n.size()+n.size()-1;
    for(int i=0;i<sz;i++)
    {
        if(i%2==0)
        {
            cout<<(char)n[cn++];
        }
        else
        {
            cout<<'+';
        }
    }
    return 0;
}