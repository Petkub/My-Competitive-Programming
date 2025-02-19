#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef string str;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int nc, ns;
    cin >> nc >> ns;

    unordered_map<str, int> stdMap;
    unordered_map<int , deque<str>> stdQue;
    deque<int> order;

    for (int i = 0; i < ns; i++)
    {
        int grade;
        str sid;
        cin >> grade >> sid;
        if (grade >= 1 && grade <= nc)
        {
            stdMap[sid] = grade;
        }
    }
    str cmd;
    while (cin >> cmd && cmd != "X")
    {
        if (cmd == "E")
        {
            str eid;
            cin >> eid;
            auto it = stdMap.find(eid);
            if (it == stdMap.end()) {continue;}
            int curGrade = it->second;

            if (stdQue[curGrade].empty()) {order.push_back(curGrade);}
            stdQue[curGrade].push_back(eid);
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