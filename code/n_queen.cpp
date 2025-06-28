#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> qCol;
int cnt = 0;

bool isOk(int row, int col)
{
    for(int r=0;r<row;r++)
    {
        int pcol = qCol[r];
        if (col==pcol)
        {
            return false;
        }
        if (abs(col-pcol)==abs(r-row))
        {
            return false;
        }
    }
    return true;
}

void solve(int row)
{
    if (row == N)
    {
        cnt++;
        return;
    }
    for(int c=0;c<N;c++)
    {
        if(isOk(row, c))
        {
            qCol[row] = c;
            solve(row+1);
        }
    }
}

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    cin>>N;
    qCol.resize(N);
    solve(0);
    cout<<cnt;
    return 0;
}