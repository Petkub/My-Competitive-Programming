n = input()
lst = []

for i in range(0, len(n)):
    if n[i] not in lst:
        lst.append(n[i])
        
