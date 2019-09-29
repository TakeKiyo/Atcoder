a,b,c,d = list(map(int,input().split()))
ans = 0
if b % c == 0:
    ans += b//c
else:
    ans += (b- (b%c)) //c

if (a-1) % c == 0:
    ans -= (a-1)//c
else:
    ans -= ((a-1)- ((a-1)%c)) //c

ans = int(ans)
if b % d == 0:
    ans += b//d
else:
    ans += (b- (b%d)) //d

if (a-1) % d == 0:
    ans -= (a-1)//d
else:
    ans -= ((a-1)- ((a-1)%d)) //d
ans = int(ans)
e = c*d

c_2 = c
d_2 = d
if (c_2< d_2):
    tmp = c_2
    c_2 = d_2
    d_2 = tmp
r = c_2 % d_2
while r != 0:
    c_2 = d_2
    d_2 = r
    r = c_2 % d_2
e = int(e //d_2)

ans2 = 0


if b % e == 0:
    ans2 += b//e
else:
    ans2 += (b- (b%e)) //e
if (a-1) % e == 0:
    ans2 -= (a-1)//e
else:
    ans2 -= ((a-1)- ((a-1)%e)) //e

sa = ans - ans2
print(int(b-a+1-sa))