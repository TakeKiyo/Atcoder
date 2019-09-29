n,m = list(map(int,input().split()))
lis = []
lis = list(map(int,input().split()))
nu_sum = 0
for i in range(n):
    nu_sum += lis[i]
for i in range(m):
    if nu_sum <= 0:
        break
    tmp_max = max(lis)
    lis[lis.index(tmp_max)] = tmp_max //2
    if tmp_max % 2 == 0:
        nu_sum -= tmp_max/2
    else:
        nu_sum -= tmp_max // 2 + 1
print(int(nu_sum))
