import sys
sys.setrecursionlimit(10000000) 
h,w = list(map(int,input().split()))
maze = []
for i in range(h):
    inp = [str(x) for x in input()]
    maze.append(inp)
    if "s" in inp:
        x_s = i
        y_s = inp.index("s")
    if "g" in inp:
        x_g = i
        y_g = inp.index("g")


reached = []
for i in range(h):
    reached.append([])
    for j in range(w):
        reached[i].append(0)


def dfs(x,y):
    if x < 0 or h <= x or w <= y or y < 0:
        return
    if maze[x][y] == "#":
        return
    if reached[x][y] == 1:
        return
    reached[x][y] = 1
    dfs(x+1,y)
    dfs(x-1,y)
    dfs(x,y+1)
    dfs(x,y-1)

dfs(x_s,y_s)
if reached[x_g][y_g] == 1:
    print('Yes')
else:
    print('No')