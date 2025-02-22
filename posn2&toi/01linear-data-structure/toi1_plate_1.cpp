#include<bits/stdc++.h>
using namespace std;
typedef string str;

struct Student
{
    int g;
    str id;
    Student(): g(0), id("") {}
    Student(int g, str id): g(g), id(id) {}
};
const char nl = '\n';

int main()
{
    cin.tie(0); ios::sync_with_stdio(false);
    int nc ,ns;
    cin >> nc >> ns;
    vector<Student> sv;
    deque<Student> sdq;

    for (size_t i = 0; i < ns; i++)
    {
        int g; str id;
        cin >> g >> id;
        if (g >= 1 && g <= nc)
        {
            sv.emplace_back(g, id);
        }
    }

    str cmd;
    while (cin >> cmd && cmd != "X")
    {
        if (cmd == "E")
        {
            str id;
            cin >> id;
            bool isId = false;
            Student ens;
            for (auto &st: sv)
            {
                if (st.id == id)
                {
                    isId = true;
                    ens = st;
                    break;
                }
            }
            if (!isId) {cin >> cmd; continue;}
            auto it = sdq.begin();
            bool found = false;
            while (it != sdq.end())
            {
                if (it->g == ens.g)
                {
                    found = true;
                }
                else if (found && it->g != ens.g)
                {
                    sdq.insert(it, ens);
                    break;
                }
                it++;
            }
            if (!found || it == sdq.end())
            {
                sdq.emplace_back(ens);
            }
        }
        else if (cmd == "D")
        {
            if (!sdq.empty())
            {
                cout << sdq.front().id << nl;
                sdq.pop_front();
            }
            else
            {
                cout << "empty" << nl;
            }
        }
    }
    cout << "0" << nl;

    // test
    // for (auto &st: sdq)
    // {
    //     cout << st.g << " " << st.id << nl;
    // }
    // cout << nl;

    return (0);
}