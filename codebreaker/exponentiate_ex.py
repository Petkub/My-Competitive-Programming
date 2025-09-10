import sys

lines = sys.stdin.readlines()
n = int(lines[0])
res = []
for i in range(1, n+1):
    a,b,m = map(int, lines[i].split())
    ans = pow(a,b,m)
    sys.stdout.write(f"{ans}\n")