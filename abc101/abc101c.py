n,k = map(int,input().split())
a = map(int,input().split())
ans = 1
num = k
while num < n:
    num += (k - 1)
    ans += 1
print(ans)
