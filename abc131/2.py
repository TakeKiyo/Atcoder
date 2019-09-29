n,l= list(map(int,input().split()))
ans = 0
taste_list = []
for i in range(n):
    taste_list.append(l+i)
    ans += (l+i)
if 0 in taste_list:
    print(ans)
else:
    mini = min(taste_list)
    if mini > 0:
        print(ans-mini)
    else:
        mini2 = taste_list[-1]
        print(ans-mini2)
