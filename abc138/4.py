n,q = list(map(int,input().split()))
print(n)
dic = {}
for i in range(n):
    dic[i+1]=[]
for j in range(n-1):
    a,b=list(map(int,input().split()))
    dic[a].append(b)
    print(dic[a])
for j in range(n+1):
    print(dic[i])