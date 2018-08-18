n,m,q = input().split()
n = int(n)
m = int(m)
q = int(q)
list_r = []
list_l = []
l = []
r = []
for i in range(m):
    l,r = input().split()
    list_l.append(int(l))
    list_r.append(int(r))
for j in range(q):
    num = 0
    p,q = input().split()
    p = int(p)
    q = int(q)
    for k in range(m):
        if list_l[0] < p:
            list_l.pop(0)
            list_r.pop(0)
        else:
            break
    index_p = m - len(list_l)
    # if p in list_l:
    #     index_p = list_l.index(p)
    # elif p == list_l[-1]:
    #     index_p = m-1
    # else:
    #     index_p = list_l.index(p+1)
    for k in range(len(list_l)):
        if p <= list_l[k] and list_r[k] <= q:
            num += 1
        else:
            pass
    print(num)
