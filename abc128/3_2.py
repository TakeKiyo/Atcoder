n,m = list(map(int,input().split()))
lis = []
for i in range(m):
    sml_lis = list(map(int,input().split()))
    lis.append(sml_lis)
print(lis)
m_lis = list(map(int,input().split()))
list = [[1],[0]]
for i in range(n-1):
    copy_lis = []
    for it in list:
        copy_lis.append(it)
    new_lis = []
    for item in copy_lis:
        sma_lis =item+[1]
        sma_lis2 = item + [0]
        list.append(sma_lis)
        list.append(sma_lis2)
        del list[0]
print(list)
# for l in list:
