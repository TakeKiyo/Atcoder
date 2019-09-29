n,m = list(map(int,input().split()))
a = list(map(int,input().split()))
lis = []
for i in range(m):
    lis.append(list(map(int,input().split())))
a.sort()
lis2 = sorted(lis, key=lambda x: x[1],reverse=True)
num = 0
for item in lis2:
    if item[1] < a[num]:
        print(sum(a))
        exit()
    else:
        for i in range(item[0]):
            if a[num] <= item[1]:
                a[num] = item[1]
            else:
                break

            num += 1

print(sum(a))
