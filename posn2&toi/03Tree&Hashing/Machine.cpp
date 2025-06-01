#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    priority_queue<int> maxHeap;
    int n; cin >> n;
    while (n--)
    {
        char cmd;
        cin >> cmd;
        if (cmd == 'P')
        {
            int p;
            cin >> p;
            maxHeap.push(p);
        }
        else
        {
            if (maxHeap.empty())
            {
                cout << -1 << nl;
            }
            else
            {
                int top = maxHeap.top();
                cout << top << nl;
                maxHeap.pop();
            }
        }
    }
    return (0);
}