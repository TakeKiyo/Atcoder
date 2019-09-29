n = int(input())
lis = [0]
lis2 = list(map(int,input().split()))
lis_a = lis+lis2
if n %2 ==0:
    flag_a = [0] * (int(n/2)+1)
    for i in range(int(n/2),n):
        flag_a.append(lis_a[i+1])
else:
    flag_a = [0] * (int(n//2)+1)
    for i in range((n//2),n):
        flag_a.append(lis_a[i+1])


for i in range((n//2),0,-1):
    temp_sum = 0
    j = 2
    while (i*j <=n):
        temp_sum += flag_a[i*j]
        j += 1
    if temp_sum % 2 == 0:
        if lis_a[i] == 1:
            flag_a[i] = 1
        else:
            flag_a[i] = 0
    else:
        if lis_a[i] == 1:
            flag_a[i] = 0
        else:
            flag_a[i] = 1
print(flag_a.count(1))
anslis = []
for i in range(n):
    if flag_a[i] == 1:
        anslis.append(i)
strin = ""
for item in anslis:
    strin += str(item) + " "
if len(anslis):
    print(strin)