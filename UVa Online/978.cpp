#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--)
    {
        int B;
        cin >> B;
        int GR, BR;
        cin >> GR >> BR;
        priority_queue<int> green, blue;
        while (GR--)
        {
            int n;
            cin >> n;
            green.push(n);
        }
        while (BR--)
        {
            int n;
            cin >> n;
            blue.push(n);
        }

        while (!green.empty() && !blue.empty())
        {
            int battle = min(B, (int)min(green.size(), blue.size()));
            vector<int> gs, bs;

            for (int i = 0; i < battle; i++)
            {
                gs.emplace_back(green.top()); green.pop();
                bs.emplace_back(blue.top()); blue.pop();
            }
            for (int i = 0; i < battle; i++)
            {
                if (gs[i] > bs[i]) {green.push(gs[i] - bs[i]);}
                else if (bs[i] > gs[i]) {blue.push(bs[i] - gs[i]);}
            }
        }
        if (green.empty() && blue.empty())
        {
            cout << "green and blue died" << '\n';
        }
        else if (!green.empty())
        {
            cout << "green wins\n";
            while (!green.empty())
            {
                cout << green.top() << '\n'; green.pop();
            }
        }
        else 
        {
            cout << "blue wins\n";
            while (!blue.empty())
            {
                cout << blue.top() << '\n'; blue.pop();
            }
        }
        if (T) {cout << '\n';}
    }
    return (0);
}