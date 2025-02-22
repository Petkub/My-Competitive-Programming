#include <bits/stdc++.h>
using namespace std;
using str = string;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int nc, ns;
    cin >> nc >> ns;

    unordered_map<str, int> stdMap;
    while (ns--)
    {
        int cls;
        str sid;
        cin >> cls >> sid;
        stdMap[sid] = cls;
    }

    str cmd;
    unordered_map<int, deque<str>> stdQue;
    deque<int> order;

    while (cin >> cmd && cmd != "X")
    {
        if (cmd == "E")
        {
            str sid; cin >> sid;
            auto it = stdMap.find(sid);
            if (it != stdMap.end())
            {
                int key = it->second;
                if (stdQue[key].empty())
                {
                    order.push_back(key);
                }
                stdQue[key].emplace_back(sid);
            }
            else {continue;}
        }
        else
        {
            if (!order.empty())
            {
                cout << stdQue[order.front()].front() << nl;
                stdQue[order.front()].pop_front();
                if (stdQue[order.front()].empty())
                {
                    order.pop_front();
                }
            }
            else
            {
                cout << "empty" << nl;
            }
        }
    }
    cout << "0" << nl;
    return (0);
}