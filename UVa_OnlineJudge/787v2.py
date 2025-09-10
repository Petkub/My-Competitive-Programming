import sys

input = [int(e) for e in sys.stdin.readline().strip().split()]

while len(input) != 0:
    lst = []
    for e in input:
        if e != -999999:
            lst.append(e)
    
    mx_ans = lst[0]
    cur_mx = lst[0]
    cur_mn = lst[0]
    for i in range(1, len(lst)):
        val=lst[i]
        if val<0:
            temp=cur_mn
            cur_mn = cur_mx
            cur_mx = temp
        cur_mx = max(val, cur_mx*val)
        cur_mn = min(val, cur_mn*val)
        mx_ans = max(mx_ans,cur_mx)
    print(mx_ans)
    input = [int(e) for e in sys.stdin.readline().strip().split()]
    
