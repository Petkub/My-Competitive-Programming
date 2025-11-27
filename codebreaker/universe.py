import sys
from collections import deque

n, k = map(int,input().split())
adj = [[] for _ in range(n+1)]
cat = [0]+[int(e) for e in input().split()]
for i in range(n-1):
    u,v = map(int,input().split())
    adj[u].append(v)
    adj[v].append(u)

vis = [False for _ in range(n+1)]
con = [0 for _ in range(n+1)]
con[1] = cat[1]

vis[1] = True
cnt = 0
q = deque()
q.append(1)
while (len(q)!=0):
    u = q[0]
    q.popleft()
    if (u!=1 and len(adj[u])==1):
        cnt+=1
    for v in adj[u]:
        if vis[v]:
            continue
        if con[u]+cat[v] > k:
            continue
        if cat[v]:
            con[v]=con[u]+cat[v]
        else:
            con[v] = 0
        vis[v]=True
        q.append(v)
print(cnt)