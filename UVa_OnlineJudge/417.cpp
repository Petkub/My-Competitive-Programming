#include<bits/stdc++.h>
using namespace std;
using vs = vector<string>;
using ump = unordered_map<string, int>;

int main()
{
    vs word;
    word.reserve(26);
    for (char c = 'a'; c <= 'z'; c++)
    {
        word.emplace_back(1, c);
    }
    

    return 0;
}