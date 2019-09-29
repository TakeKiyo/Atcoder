n = int(input())
lis = []
for i in range(n):
    s,p = input().split()
    smal_lis = [s,int(p),i+1]
    lis.append(smal_lis)
lis.sort(key=lambda x:x[1],reverse=True)
lis.sort(key=lambda x:x[0])

for i in range(n):
    print(lis[i][2])
