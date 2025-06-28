#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios_base::sync_with_stdio(false);
    tm mtime = {0, 0, 0, 29, 4, 2013 - 1900};
    mktime(&mtime);
    vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "May 29, 2013 " << days[mtime.tm_wday] << '\n';
    return (0);
}