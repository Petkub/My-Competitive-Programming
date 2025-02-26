x = input().split()
c = input()

cnt = 0
for i in range(len(x)):
    if (x[i] == c):
        cnt += 1
        
print(cnt)

