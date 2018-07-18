a,b = input().split()
if int(a) + int(b) == 15:
    print('+')
elif int(a) * int(b) == 15:
    print('*')
else:
    print('x')
