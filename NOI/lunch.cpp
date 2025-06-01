#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(),x.end()

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int n,m,cnt=0,sum=0;
    cin>>n>>m;
    vector<int> box(m,0);
    for (int &v: box) {cin >> v;}
    sort(all(box));
    for(int &v: box)
    {
        sum += v;
        if (sum<=n) {cnt++;}
        else break;
    }
    cout << cnt;
    return 0;
}