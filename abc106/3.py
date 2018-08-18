s = list(input())
k = int(input())
if '1' not in s:
    print(s[0])
else:
    num = 0
    for i in range(len(s)):
        if s[0] == "1":
            s.pop(0)
            num += 1
        else:
            break
    if num >= k:
        print(1)
    else:
        print(s[0])
