#include<bits/stdc++.h>
using namespace std;
using str = string;
using ll = long long;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    str hr = to_string(t/60%24);
    str min = to_string(t%60);
    str hh = hr.length()<2? "0"+hr:hr;
    str mm = min.length()<2? "0"+min:min;
    cout << hh + mm << '\n';
    return (0);
}