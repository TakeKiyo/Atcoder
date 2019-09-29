n,m =list(map(int,input().split()))
lis = []
max_begin = 0
min_end = n
for i in range(m):
    begin,end =list(map(int,input().split()))
    
    if begin >= max_begin:
        max_begin = begin
    if end <= min_end:
        min_end = end

if min_end-max_begin >= 0:
    print(min_end-max_begin+1)
else:
    print(0)
