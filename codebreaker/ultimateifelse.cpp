#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0);ios::sync_with_stdio(0);
    string N,S;cin>>N>>S;
    if(N=="1") cout<<"one";
    else if(N=="9") cout<<"9";
    else if(S=="hello") cout<<"world";
    else if(S=="world" and N=="3") cout<<"andss";
    else if(S=="hmm" or N=="20") cout<<"sus";
    else if((int)S.length()>5) cout<<"long";
    else if(to_string((int)S.length())==N) cout<<"equal";
    else if((int)N.back()%2==0) cout<<"222222222222222222222";
    else cout<<"clown";
    return 0;
}