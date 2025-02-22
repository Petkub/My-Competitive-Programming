#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vb = vector<bool>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    vi j(n);
    vb visited(n, false);
    iota(j.begin(), j.end(), 1);
    
    int visitedCnt = 0;
    int pos = 0;
    while (visitedCnt < n)
    {
        int s = 0;
        while (s < m - 1)
        {
            if (!visited[pos]) {s++;}
            pos = (pos + 1) % n;
        }
        while (visited[pos])
        {
            pos = (pos + 1) % n;
        }
        cout << j[pos] << " ";
        
        visited[pos] = true;
        visitedCnt++;
        
        pos = (pos + 1) % n;
    }
    return (0);
}
