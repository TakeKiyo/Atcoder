n,m,q = input().split()
n = int(n)
m = int(m)
q = int(q)
kukan = []
kekka = []
for i in range(m):
    kukan.append(input().split())
    kukan[i][0] = int(kukan[i][0])
    kukan[i][1] = int(kukan[i][1])
for j in range(q):
    num = 0
    p,q = input().split()
    p = int(p)
    q = int(q)
    for k in range(m):
        if p <= kukan[k][0] and kukan[k][1] <= q:
            num += 1
        else:
            pass
    print(num)
