#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    unsigned long B;
    cin >> B;
    int total = 0;
    while(B>0)
    {
        total += (B & 1);
        B >>= 1;
    }
    cout<<total;
    return 0;
}