r,d,x = list(map(int,input().split()))
lis = []
for i in range(10):
    if i ==0:
        lis.append(r*x-d)
    else:
        lis.append(r*lis[i-1]-d)
    print(lis[i])
