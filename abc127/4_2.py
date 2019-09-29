n,m = list(map(int,input().split()))
a = list(map(int,input().split()))
lis = []
for i in range(m):
    lis.append(list(map(int,input().split())))
a.sort()
lis2 = sorted(lis, key=lambda x: x[1],reverse=True)


for item in lis2:
    if item[1] < a[0]:
        break
    else:
        for i in range(item[0]):
            if a[i] <= item[1]:
                a[i] = item[1]
            else:
                break

        a = sorted(a)

print(sum(a))
