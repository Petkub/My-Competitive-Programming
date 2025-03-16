#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
/* version 1 */

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int t = 0;
    vector<int> p(N, 0);
    for (size_t i = 0; i < N; i++)
    {
        int ni;
        cin >> ni;
        p[i] = ni;
        t += ni;
    }
    int upper = t / 2 + 1;

    for (size_t i = 0; i < N; i++)
    {
        vector<int> other;
        int sum = p[i];
        int count = 0;
        for (size_t j = 0; j < N; j++)
        {
            if (i != j)
            {
                other.push_back(p[j]);
            }
        }
        sort(other.rbegin(), other.rend());
        int size = other.size();
        for (size_t k = 0; k < size; k++)
        {
            sum += other[k];
            count++;
            if (sum >= upper) {break;}
        }
        cout << count << nl;
    }
    return (0);
}