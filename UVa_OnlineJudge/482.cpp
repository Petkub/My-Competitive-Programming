#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    vector<string> res;
    string s;
    stringstream ss;
    vector<int> vi;
    vector<string> vf;
    vector<string> sortArr;
    cin >> n;
    cin.ignore();
    
    for (size_t i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            cout << "\n";
        }
        vi.clear(), vf.clear(), sortArr.clear();
        getline(cin, s);
        ss.clear(), ss << s;
        int order;
        while (ss >> order) {vi.push_back(order - 1);}

        getline(cin, s);
        ss.clear(), ss << s;
        string f;
        while (ss >> f) {vf.push_back(f);}

        sortArr.resize(vf.size());
        for (size_t j = 0; j < sortArr.size(); j++)
        {
            sortArr[vi[j]] = vf[j];
        }
        for (const string &s: sortArr)
        {
            res.push_back(s);
        }
        if (i != n)
        {
            res.push_back("");
        }
    }
    for (const string &s: res)
    {
        cout << s << "\n";
    }
    return (0);
}