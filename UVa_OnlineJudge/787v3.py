import sys

def read_input():
    input = [int(e) for e in sys.stdin.readline().strip().split()]
    return input

input = read_input()
while len(input) != 0:
    lst = []
    for e in input:
        if e != -999999:
            lst.append(e)

    dp_min = [0 for _ in range(len(lst))]
    dp_max = dp_min.copy()
    mx = lst[0]
    dp_min[0] = lst[0]
    dp_max[0] = lst[0]

    for i in range(1, len(lst)):
        cur = lst[i]
        if cur < 0:
            dp_max[i] = max(cur, cur * dp_min[i-1])
            dp_min[i] = min(cur, cur * dp_max[i-1])
        else:
            dp_max[i] = max(cur, cur * dp_max[i-1])
            dp_min[i] = min(cur, cur * dp_min[i-1])
        mx = max(mx, dp_max[i])
    print(mx)
    input = read_input()
    
