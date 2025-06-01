#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vpli = vector<pair<ll, int>>;
using vll = vector<ll>;
const char nl = '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vpli party(N);

    for (int i = 0; i < N; i++){
        cin >> party[i].first;
        party[i].second = i;
    }
    
    sort(party.rbegin(), party.rend());
    
    vll pf(N + 1, 0LL);
    for (int i = 1; i <= N; i++){
        pf[i] = pf[i - 1] + party[i - 1].first;
    }
    ll total = pf[N];
    ll upper = total / 2 + 1;

    vll res(N, 0);
    for (int i = 0; i < N; i++){
        ll sumMa = party[i].first;
        int original = party[i].second;
        int candidateA = INT_MAX, candidateB = INT_MAX;

        ll needA = upper - sumMa;
        int kA = int(lower_bound(pf.begin(), pf.end(), needA) - pf.begin());
        if(kA <= i && kA < N){
            candidateA = kA;
        }
        
        int kBprime = int(lower_bound(pf.begin(), pf.end(), upper) - pf.begin());
        int kB = kBprime - 1;
        if(kB > i && kB < N){
            candidateB = kB;
        }
        
        int ans = min(candidateA, candidateB);
        if(ans == INT_MAX) { 
            ans = N - 1;
        }
        res[original] = ans;
    }
    
    for (const ll &x : res){
        cout << x << nl;
    }
    
    return 0;
}
