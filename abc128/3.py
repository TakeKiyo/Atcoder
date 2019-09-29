n,m = list(map(int,input().split()))
lis = []
for i in range(m):
    sml_lis = list(map(int,input().split()))
    lis.append(sml_lis)
m_lis = list(map(int,input().split()))
lis = [[1],[0]]
# for item in lis:
#     del lis[0]
#     if len(item) > n:
#         break
#     sma_lis = item+[1]
#     sma_lis2 = item + [0]
#     lis.append(sma_lis)
#     lis.append(sma_lis2)
#     print(lis)

for i in range(n):
    for j in range(2**(i+1)):
        sma_lis = lis[j]+[1]
        sma_lis2 = lis[j] + [0]
        del lis[0]
        lis.append(sma_lis)
        lis.append(sma_lis2)
    print(lis)
