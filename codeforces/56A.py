s = input()
word = "hello"
new = []
pt = 0
i = 0
while i<len(s) and "".join(new)!=word:
    if s[i]==word[pt]:
        new.append(s[i])
        pt+=1
    i+=1
print("YES" if "".join(new)==word else "NO")