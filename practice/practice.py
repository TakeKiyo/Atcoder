money = 300
item = (("みかん", 100), ("りんご", 200), ("ぶどう", 300))
n = len(item)
for i in range(2 ** n):
    bag = []
    print('---------------------')
    print('i:'+str(i))
    for j in range(n):  # このループが一番のポイント
        print('j:'+str(j))
        print(bin(i >> j))
        if ((i>>j)  & 1):
            print('yes')
        