s = [int(x) for x in input()]
count = len(s)-1
wa = 0
for bit in range(2**count):
    hugou = [""] * count
    for i in range(count):
        if (bit >> i) & 1:
            hugou[count-1-i] = "+"
    calc = ""
    for j in range(count):
        calc += str(s[j])
        calc += str(hugou[j])
    calc += str(s[-1])
    wa += eval(calc)
print(wa)
