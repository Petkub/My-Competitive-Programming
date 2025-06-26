#include<bits/stdc++.h>
using namespace std;

struct Region
{
    int mx = 0;      
    int last = -1;       
    int mxCur = 0; 
};

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);

    int n;
    cin >> n;
    map<string, Region> data;

    for (int i = 0; i < n; ++i)
    {
        string rname;
        int Q;
        cin >> rname >> Q;

        if (Q == 1)
        {
            int cir;
            cin >> cir;
            Region& region = data[rname];

            if (cir == region.last)
            {
                region.mxCur++;
            } 
            else 
            {
                region.mxCur = 1;
            }

            region.last = cir;
            region.mx = max(region.mx, region.mxCur);
        }
        else
        {
            cout << data[rname].mx << "\n";
        }
    }

    return 0;
}