#include<bits/stdc++.h>
using namespace std;
stack<int> stk;
stack<int> mnStk;

void push(int x)
{
    stk.push(x);
    if (mnStk.empty() || x <= mnStk.top())
    {
        mnStk.push(x);
    }
}

void pop()
{
    if (mnStk.top()==stk.top())
    {
        mnStk.pop();
    }
    stk.pop();
}

int top()
{
    return stk.top();
}

int getMin()
{
    return mnStk.top();
}

// int main() {
//     int Q;
// 	scanf("%d", &Q);
// 	while (Q--) {
// 		int op;
// 		scanf("%d", &op);
// 		if (op == 0) {
// 			int x;
// 			scanf("%d", &x);
// 			push(x);
// 		} else if (op == 1) pop();
// 		else if (op == 2) printf("\n%d\n", top());
// 		else printf("%d\n", getMin());
// 	}
// }