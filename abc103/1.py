a,b,c = map(int,input().split())
num = 0
n = []
n.append(a)
n.append(b)
n.append(c)
n.sort()
mini = min(n)
n.remove(min(n))
num += (n[0] -mini)
num += (n[1] - n[0])
print(num)
