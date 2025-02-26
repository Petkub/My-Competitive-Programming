#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    // Read p_i and build prefix sums P.
    vector<long long> p(N), P(N);
    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }
    P[0] = p[0];
    for(int i = 1; i < N; i++) {
        P[i] = P[i-1] + p[i];
    }

    // Build array B = (P[k], k) and sort by P[k].
    vector<pair<long long,int>> B(N);
    for(int k = 0; k < N; k++){
        B[k] = make_pair(P[k], k+1); 
        // +1 if you want 'k+1' to be the 1-based index of episodes
    }
    sort(B.begin(), B.end(), 
         [](auto &a, auto &b){
             return a.first < b.first;  // ascending order by prefix sum
         });

    // Read queries, store (q_j, j) for each
    vector<pair<long long,int>> queries(Q);
    for(int j = 0; j < Q; j++){
        long long budget;
        cin >> budget;
        queries[j] = make_pair(budget, j);
    }
    // Sort queries by ascending budget
    sort(queries.begin(), queries.end(), 
         [](auto &a, auto &b){
             return a.first < b.first;
         });

    // We'll keep track of answers in an array "ans"
    vector<int> ans(Q);

    // Sweep: 
    int ptr = 0;
    int maxIndex = 0;

    // For each query in ascending order of budget
    for(auto &q : queries){
        long long budget = q.first;
        int qId = q.second;

        // While we can afford the next prefix-sum in B, activate it
        while(ptr < N && B[ptr].first <= budget){
            maxIndex = max(maxIndex, B[ptr].second);
            ptr++;
        }

        // After adding all possible prefix sums up to "budget",
        // the largest index we can watch is "maxIndex".
        ans[qId] = maxIndex;
    }

    // Output in the original query order
    for(int j = 0; j < Q; j++){
        cout << ans[j] << "\n";
    }

    return 0;
}
