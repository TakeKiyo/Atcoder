n = int(input())
a = list(map(int,input().split()))
wa = 0
for i in range(n):
    wa += a[i]
print(wa - n)
