n = input()
split_n = sum(list(map(int,n)))
if int(n) % split_n == 0:
    print('Yes')
else:
    print('No')
