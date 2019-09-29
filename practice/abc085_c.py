n,y = map(int,input().split())
num = 0
for i in range(n+1):
    for k in range(n-i+1):
        if 10000*i + 5000 *k + 1000 * (n-i-k) == y:
            print(i,k,n-i-k)
            exit()
        else:
            pass
print('-1 -1 -1 ')
