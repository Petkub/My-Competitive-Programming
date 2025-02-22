#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
using str = string;
using psi = pair<str, int>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    unordered_map<str, int> std;
    deque<psi> stdQue;
    
    int ns, nc;
    cin >> nc >> ns;
    for (int i = 0; i < ns; i++)
    {
        int cls;
        str sid;
        cin >> cls >> sid;
        if (cls >= 1 && cls <= nc)
        {
            std[sid] = cls;
        }
    }
    
    str cmd;
    while (cin >> cmd && cmd != "X")
    {
        if (cmd == "E")
        {
            str sid; cin >> sid;
            pair<str, int> curStd;
            auto it = std.find(sid);
            if (it != std.end())
            {
                curStd = {sid, it->second};
            }
            else {continue;}
            if (stdQue.empty())
            {
                stdQue.emplace_back(curStd);
                continue;
            }
            int insertIdx = -1;
            deque<psi> tempQue;
            while (!stdQue.empty())
            {
                pair<str, int> curFront = stdQue.front();
                stdQue.pop_front();
                tempQue.emplace_back(curFront);

                if (curFront.second == curStd.second)
                {
                    insertIdx = tempQue.size();
                }
            }
            if (insertIdx != -1)
            {
                tempQue.insert(tempQue.begin() + insertIdx, curStd);
            }
            else
            {
                tempQue.emplace_back(curStd);
            }
            swap(stdQue, tempQue);
        }
        else
        {
            if (!stdQue.empty())
            {
                cout << stdQue.front().first << nl;
                stdQue.pop_front();
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