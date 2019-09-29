import math
n = int(input())
lis = []
for i in range(n):
    lis.append(list(map(int,input().split())))
ans = 0
for i in range(n):
    for k in range(i,n):
        if math.sqrt((lis[k][0]-lis[i][0])**2 + (lis[k][1]-lis[i][1])**2) >= ans:
            ans = math.sqrt((lis[k][0]-lis[i][0])**2 + (lis[k][1]-lis[i][1])**2)
        else:
            pass
print(ans)