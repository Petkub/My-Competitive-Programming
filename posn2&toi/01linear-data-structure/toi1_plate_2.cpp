#include <bits/stdc++.h>
using namespace std;

typedef string str;
const char nl = '\n';

struct Student
{
    int grade;
    str id;

    Student(): grade(0), id("") {}
    Student(int g, str sid): grade(g), id(sid) {}
};

bool cmpId(const Student &st1, const Student &st2)
{
    return st1.id == st2.id;
}

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int nc, ns;
    cin >> nc >> ns;
    vector<Student> std;
    for (size_t i = 0; i < ns; i++)
    {
        int sg;
        str sid;
        cin >> sg >> sid;
        if (sg >= 1 && sg <= nc)
        {
            std.push_back(Student(sg, sid));
        }
    }
    deque<Student> deq;
    str cmd;
    while (cin >> cmd && cmd != "X")
    {
        if (cmd == "E")
        {
            str eid;
            cin >> eid;
            Student estd;
            bool found = false;
            for (const Student &s: std)
            {
                if (s.id == eid)
                {
                    estd = s;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                continue;
            }

            if (deq.empty())
            {
                deq.push_back(estd);
                continue;
            }
            deque<Student> newQ;
            bool inserted = false;
            while (!deq.empty())
            {
                Student front = deq.front();
                deq.pop_front();
                newQ.push_back(front);

                if (!inserted && front.grade == estd.grade)
                {
                    if (deq.empty() || deq.front().grade != estd.grade)
                    {
                        newQ.push_back(estd);
                        inserted = true;
                    }
                }
            }
            if (!inserted)
            {
                newQ.push_back(estd);
            }
            swap(deq, newQ);
        }
        else if (cmd == "D")
        {
            if (!deq.empty())
            {
                cout << deq.front().id << nl;
                deq.pop_front();
            }
            else
            {
                cout << "empty" << nl;
            }
        }
    }
    cout << "0" << nl;

    // cout << "queue" << nl;
    // for (const Student &s: deq)
    // {
    //     cout << s.id << " " << nl; 
    // }
    return (0);
}

// 3 8
// 1 11
// 1 12
// 1 13
// 2 21
// 2 22
// 3 31
// 3 32
// 3 33
// E 31
// E 11
// E 12
// E 32
// E 21
// E 33
// E 22
// E 13
// D
// D
// D
// D
// D
// X