n = int(input())
lis = []
for i in range(n):
    a,b = list(map(int,input().split()))
    lis.append([a,b])
lis.sort(key=lambda x:x[1])
ans = 0
time = 0
for item in lis:
    time += item[0]
    if time > item[1]:
        ans += 1

if ans == 0:
    print('Yes')
else:
    print('No')