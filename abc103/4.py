n,m = map(int,input().split())
ayou = []
byou = []
for i in range(m):
    kazu = list(map(int,input().split()))
    a = min(kazu)
    kazu.remove(min(kazu))
    b = max(kazu)
    ayou.append(a)
    byou.append(b)
if n % 2 == 1:
    hanbun = (n-1) / 2
    ans = 1
    for i in range(m):
        if ayou[i] >= hanbun or byou[i] <= hanbun:
            ans += 1
            print(i)
        else:
            pass
else:
    hanbun = n / 2
    ans = 1
    for i in range(m):
        if ayou[i] >= hanbun or byou[i] <= hanbun:
            ans += 1
        else:
            pass

if ans >= n or n <= m:
    print(n - 1)
else:
    print(ans)
