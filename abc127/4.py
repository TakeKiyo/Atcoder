n,m = list(map(int,input().split()))
a = list(map(int,input().split()))
lis = []
for i in range(m):
    lis.append(list(map(int,input().split())))
a.sort()
print(a)
print(lis)

lis2 = sorted(lis, key=lambda x: x[1],reverse=True)
print(lis2)

for item in lis2:
    print('item:' + str(item))
    if item[1] < a[0]:
        break
    else:
        for i in range(item[0]):
            print('iのはじめ'+str(a))
            if a[i] <= item[1]:
                a[i] = item[1]
            else:
                break
            print("a:"+str(a))
        a = sorted(a)
        print("sorted_a:"+str(a))
print(a)
print(sum(a))
