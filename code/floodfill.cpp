#include<bits/stdc++.h>
using namespace std;
int R,C;
vector<string> grid;

int dr[] = {1, 1, 0, -1, -1, -1,  0,  1};              // the order is:
int dc[] = {0, 1, 1,  1,  0, -1, -1, -1};              // S/SE/E/NE/N/NW/W/SW

int floodfill(int r, int c, char c1, char c2)            // returns the size of CC
{
    if ((r < 0) or (r >= R)) return 0;                // outside grid, part 1
    if ((c < 0) or (c >= C)) return 0;                // outside grid, part 2
    if (grid[r][c] != c1) return 0;                   // does not have color c1

    int ans = 1;                                      // (r, c) has color c1
    grid[r][c] = c2;                                  // to avoid cycling
    for(int d = 0; d < 8; d++)
    {
        ans += floodfill(r+dr[d], c+dc[d], c1, c2);     // the code is neat as
    }                                                 // we use dr[] and dc[]
    return ans;
}

int main()
{
    return 0;
}