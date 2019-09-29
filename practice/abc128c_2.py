n,m = map(int,input().split())
lis = []
for i in range(m):
    inp = list(map(int,input().split()))
    lis.append(inp[1:])
p_lis = list(map(int,input().split()))

ans = 0
for bit in range(2**n):
    f = []
    for i in range(m):
        if ((bit>>i) & 1):
            f.append(1)
        else:
            f.append(0)
    temp = 0
    ok = 1
    for j in range(m):
        for item in lis[j]:
            if (f[item-1]==1):
                temp += 1
        if (temp%2 != p_lis[j]):
            ok = 0
        
    if ok:
        ans += 1
print(ans)
        