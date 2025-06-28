#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N;
    cin >> N;
    cin.ignore();
    map<string, int> mp;
    while (N--)
    {
        string l;
        getline(cin, l);
        stringstream ss(l);
        string temp;
        while (ss >> temp)
        {
            mp[temp]++;
            break;
        }
    }
    for(auto [k, v]: mp)
    {
        cout << k << " " << v << '\n';
    }
    return (0);
}