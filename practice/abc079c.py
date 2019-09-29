n = [int(x) for x in input()]
op_cnt= len(n)-1 #3
for bit in range(2**op_cnt):
    op = ["-"] * op_cnt
    for i in range(op_cnt):
        if ((bit>>i) & 1):
            op[op_cnt-1-i] = "+"
    lis = []
    lis.append(str(n[0]))
    lis.append(op[0])
    lis.append(str(n[1]))
    lis.append(op[1])
    lis.append(str(n[2]))
    lis.append(op[2])
    lis.append(str(n[3]))
    calc = ""
    for item in lis:
        calc += item
    if eval(calc) == 7:
        print(calc+ "=7")
        break
    