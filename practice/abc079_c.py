abcd = input()
hugou = ["+","-"]
a,b,c,d = list(abcd)
for i in hugou:
    for j in hugou:
        for k in hugou:
            wa = a + i + b + j + c + k + d
            if eval(wa) == 7:
                print(str(wa)+'=7')
                exit()