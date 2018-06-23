k = input()
num = 1
ans = 0
while ans < int(k):
    if (num/sum(list(map(int,str(num))))) <= ((num+1)/sum(list(map(int,str(num+1))))):
        print(num)
        num += 1
        ans += 1
    else:
        num += 1
