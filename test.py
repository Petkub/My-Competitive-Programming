lst = [5, 3, 7, 9, 2]

for i in range(0, len(lst) - 1):
    swap = False
    for j in range(0, len(lst) - 1 - i):
        if (lst[j] > lst[j + 1]):
            temp = lst[j]
            lst[j] = lst[j + 1]
            lst[j + 1] = temp
            swap = True
    if (not swap):
        break

print(lst)