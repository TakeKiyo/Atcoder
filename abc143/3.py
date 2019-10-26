n = int(input())
s = input()
idx = 0
idx = 1
ans = 1
if n == 1:
    print(1)
else:
    tmp = s[0]
    while(idx<n):
        if s[idx]==tmp:
            idx += 1
        else:
            tmp = s[idx]
            idx += 1
            ans +=1
    print(ans)
