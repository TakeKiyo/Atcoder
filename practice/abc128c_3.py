n, m = map(int, input().split())
s = [list(map(int, input().split())) for _ in range(m)]
p = list(map(int, input().split()))
ans = 0

print(s)
for i in range(2**n):
    flag = []
    ptn = bin(i)[2:].rjust(n, "0")
    for j in range(n):
        if ((i>>j)&1):
            flag.append(1)
        else:
            flag.append(0)
    print(flag)
    print(ptn)
    ok = True
    for j in range(m):
        temp = 0
        for n in range(1,s[j][0]+1):
            if flag[s[j][n]-1] == 1:
                temp += 1
        if temp%2 != p[j]:
            ok = False
    if ok:
        ans += 1
print(ans)
