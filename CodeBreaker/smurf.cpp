#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);
    int N;
    cin>>N;
    deque<int> sm;
    bool swap = false;
    for(int i=1;i<=N;i++)
    {
        int n;
        cin>>n;
        if(!swap) {sm.push_back(n);}
        else {sm.push_front(n);}
        swap = !swap;
    }
    if(N%2!=0)
    {
        reverse(sm.begin(),sm.end());
    }
    for(const int &v: sm)
    {
        cout<<v<<" ";
    }
    return 0;
}