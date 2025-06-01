#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int N, M, cnt = 0;
    bool isBroke = false;
    cin >> N >> M;
    while(M--)
    {
        string evt;
        cin >> evt;
        if (!isBroke && evt == "LAND")
        {
            cnt++;
            if (cnt > N) {isBroke = true;}
        }
        else if (evt == "LEAVE")
        {
            if (cnt >= 0) {cnt--;}
        }
        else if (evt == "EVACUATE")
        {
            cnt = 0;
        }
    }
    cout << (isBroke? "PLAN REJECTED":"PLAN ACCEPTED") << '\n';
    return (0);
}