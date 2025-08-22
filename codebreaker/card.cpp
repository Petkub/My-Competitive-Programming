#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    int M, K;
    cin >> M >> K;
    deque<int> deck(M);
    for(int i=0;i<M;i++) deck[i]=i;
    string move;
    cin>>move;
    for(size_t i=0;i<move.length()-1;i++)
    {
        if(move[i]=='A')
        {
            deck.push_back(deck.front());
            deck.pop_front();
        }
        else if (move[i]=='B')
        {
            int first = deck.front(); deck.pop_front();
            int second = deck.front(); deck.pop_front();
            deck.push_back(second);
            deck.push_front(first);
        }
    }
    for(int i=K-1;i<=K+1;i++)
    {
        cout<<deck[i]<<' ';
    }
    return 0;
}