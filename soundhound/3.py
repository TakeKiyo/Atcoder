n,m,d = input().split()
n = int(n)
m = int(m)
d = int(d)
test = []
for i in range(n**m):
    test.append([])
#import numpy as np
#ans = np.array([[i+1] for i in range(n)])
#print(ans)
kaisuu = n**m

jk = 0
while  jk < m:
    j = 1
    k = 0
    while j < m:

        kaisuu0 = int(kaisuu)
        print(kaisuu0)
        for i in range(k,int(kaisuu0/n)):
            test[i].append(j)
        k += int(kaisuu/n)
        i += int(kaisuu/n)
        j += 1
        kaisuu += kaisuu0
        print(test)
    else:
        pass
    jk += 1
    kaisuu = int(kaisuu/n)
    print(kaisuu)





def sakusei(kaisuu):
    j = 1
    k = 0
    kaisuu = int(kaisuu/n)
    while j < m:
        for i in range(k,kaisuu):
            test[i].append(j)
        k += kaisuu
        i += kaisuu
        j += 1
        kaisuu += kaisuu








        #while
##        test[i].append(j)
#        i += (kaisuu/n)
#        test[i+(kaisuu/n)].append()
