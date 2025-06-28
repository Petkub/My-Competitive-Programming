#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

int sumArr2(int c)
{
    if(c < 0)
    {
        return 0;
    }
    return arr[c] + sumArr2(c - 1);
}

int main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    cout<<sumArr2(arr.size()-1);
    return 0;
}