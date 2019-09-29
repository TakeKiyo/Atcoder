n,m = map(int,input().split())
lis = []
for i in range(m):
    inp = list(map(int,input().split()))
    lis.append(inp[1:])
p_lis = list(map(int,input().split()))
print(lis)

ans = 0
for bit in range(2**n):
    print('bit'+str(bit))
    ok = 1
    for j in range(m):
        print('j:'+str(j))
        print(lis[j])
        temp = 0
        for item in lis[j]:
            if ((bit >> item) & 1):
                temp += 1
                print('ok')
        if (temp%2 != p_lis[i]):
            ok = 0
        print("temp:"+str(temp))
    if ok==1:
        ans += 1
print(ans)
