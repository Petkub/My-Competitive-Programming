#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        string name,date1,date2;
        int course;
        cin>>name>>date1>>date2>>course;
        cout<<name<<" "; 
        if(stoi(date1.substr(0,4))>=2010)
        {
            cout<<"eligible";
        }
        else if(stoi(date2.substr(0,4)) >= 1991)
        {
            cout<<"eligible";
        }
        else if(course >= 41)
        {
            cout<<"ineligible";
        }
        else
        {
            cout<<"coach petitions";
        }
        cout<<'\n';
    }
    return 0;
}