a,p = list(map(int,input().split()))
ans = (a*3+p)
if ans % 2 == 0:
    print(int((ans)/2))
else:
    print(int((ans-1)/2))
