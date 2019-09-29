d,g = list(map(int,input().split()))
lis = []
for i in range(d):
    lis.append(list(map(int,input().split())))
ans = 10000000
for bit in range(2**d):
    price = 0
    count = 0
    use = [0]* d
    for j in range(d):
        if (bit >> j) & 1:
            use[d-1-j] = 1
    for i in range(d):
        if use[i] == 1:
            if price < g:
                price += (i+1)*100*lis[i][0] + lis[i][1]
                count += lis[i][0]
    if price < g:

        for k in reversed(range(d)):
            if use[k] == 0:
                for m in range(lis[k][0]):
                    if price < g:
                        price += (k+1)*100
                        count += 1

    if count < ans:
        ans = count

print(ans)

