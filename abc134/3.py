n = int(input())
lis = []
for i in range(n):
    lis.append(int(input()))

max_1 = sorted(lis)[-1]
max_2 = sorted(lis)[-2]

for i in range(n):
    if lis[i] == max_1:
        print(max_2)
    else:
        print(max_1)