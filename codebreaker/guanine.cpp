#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);ios::sync_with_stdio(false);
    int N;
    cin>>N;
    deque<char> dna;
    while(N--)
    {
        string op;
        cin>>op;
        if(op=="ADD_BACK")
        {
            char n; cin>>n;
            dna.push_back(n);
        }
        else if(op=="ADD_FRONT")
        {
            char n; cin>>n;
            dna.push_front(n);
        }
        else if(op=="SNIP_FRONT")
        {
            int r; cin>>r;
            for(int i=0;i<=r;i++)
            {
                if(!dna.empty())
                {
                    dna.pop_front();
                }
            }
        }
        else if(op=="SNIP_BACK")
        {
            int r; cin>>r;
            deque<char> temp;
            for(int i=0;i<=r;i++)
            {
                if(!dna.empty())
                {
                    temp.push_back(dna.front());
                    dna.pop_front();
                }
            }
            dna=temp;
        }
        else if(op=="QUERY")
        {
            int i;cin>>i;
            if(!dna.empty()) cout<<dna[i]<<'\n';
        }
    }
    return 0;
}