s = input()
t = input()
s = list(s)
t = list(t)
num = 0
for i in range(len(s)):
    s.append(s[0])
    s.pop(0)
    if s == t:
        print('Yes')
        num += 1
        break
    else:
        pass
if num == 0:
    print('No')
