#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    char grid[5][5];
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        scanf("%s",&grid[i]);
        for(int j=0;j<5;j++)
        {
            if(grid[i][j]=='k') cnt++;
        }
    }
    if(cnt!=9)
    {
        printf("invalid"); return 0;
    }
    int dy[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dx[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    for(int y=0;y<5;y++)
    {
        for(int x=0;x<5;x++)
        {
            if(grid[y][x]=='k')
            {
                for(int i=0;i<8;i++)
                {
                    int nx= x+dx[i];
                    int ny= y+dy[i];
                    if((nx>=0 and nx<5) and (ny>=0 and ny<=5))
                    {
                        if(grid[ny][nx]=='k')
                        {
                            printf("invalid");
                            return 0;
                        }
                    }
                }
            }
        }
    }
    printf("valid");
    return 0;
}