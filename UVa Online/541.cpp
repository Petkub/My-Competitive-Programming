#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int n;
    while(cin>>n&&n!=0)
    {
        vvi mat(n, vi(n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
            }
        }
        vi sumRow(n,0), sumCol(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sumRow[i]+=mat[i][j];
                sumCol[i]+=mat[j][i];
            }
        }
        vi oddRow,oddCol;
        for(int i=0;i<n;i++)
        {
            if(sumRow[i]%2!=0) oddRow.push_back(i);
            if(sumCol[i]%2!=0) oddCol.push_back(i);
        }
        int nrow = oddRow.size();
        int ncol = oddCol.size();
        if(nrow==0&&ncol==0)
        {
            cout<<"OK\n";
        }
        else if(nrow==1&&ncol==1)
        {
            cout<<"Change bit ("<<oddRow[0]+1<<","<<oddCol[0]+1<<")\n";
        }
        else
        {
            cout<<"Corrupt\n";
        }
    }
    return 0;
}