n,m = map(int,input().split())
maze = []
for i in range(n):
    maze.append([str(x) for x in input()])
dx=[-1,-1,-1,0,0,1,1,1]
dy=[-1,0,1,-1,1,-1,0,1]
def dfs(x,y):
    maze[x][y] = "."
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx < 0 or n <= nx or ny < 0 or m <= ny or maze[nx][ny] == ".":
            pass
        else:
            dfs(nx,ny)

ans = 0
for i in range(n):
    for j in range(m):
        if maze[i][j] == "W":
            dfs(i,j)
            ans += 1

print(ans)