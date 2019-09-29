N, M = map(int, input().split())
s = [list(map(int, input().split())) for _ in range(M)] 
p = list(map(int, input().split()))
ans = 0

for i in range(2 ** N):
    light = True

    flag = []
    for k in range(N):
        if ((i>>k)&1):
            flag.append(1)
        else:
            flag.append(0)

    for j in range(M):
        tmp = 0 
        for n in range(1, s[j][0] + 1):
            if flag[s[j][n] - 1] == 1:
                tmp += 1    
        if tmp % 2 != p[j] % 2:
            light=False
    if light:
	    ans += 1
print(ans)