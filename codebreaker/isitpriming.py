import sys

n = int(input())
lst = list(map(int,input().split()))
MAXN = 1000000
p = [True for _ in range(MAXN+5)]
p[0]=False
p[1]=False

for i in range(2, MAXN+1):
    if(p[i]):
        for j in range(i*i, MAXN+1, i):
            p[j]=False

for i in range(n):
    print(1, end=" ") if p[lst[i]]==True else print(0, end=" ")