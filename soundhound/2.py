s = input()
w = int(input())
list_s = list(s)

i = 0
s = ''
while i < len(list_s):
    s += str(list_s[i])
    i += w
print(s)
