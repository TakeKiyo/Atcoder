#include <iostream>
#include <queue>

using namespace std;

const int INF = 100000000;
typedef pair<int, int> P;

char maze[50][50];
int R,C;
int sx,sy;
int gx,gy;

int d[50][50];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int bfs(){
    queue<P> que;
    for (int i=0;i <R;i++){
        for (int j=0;j<C;j++){
            d[i][j] = INF;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy] = 0;

    while(que.size()){
        P p = que.front();
        que.pop();
        if (p.first == gx && p.second == gy) break;
        for (int i = 0; i<4;i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (0 <= nx && nx < R && 0 <= ny && ny < C && maze[nx][ny] != '#' && d[nx][ny] == INF){
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main(){
    cin >> R >> C;
    cin >> sx >> sy;
    cin >> gx >> gy;
    sx -=1;
    sy -=1;
    gx -=1;
    gy -=1;
    for (int i=0;i<R;i++){
        for (int j=0;j<C;j++){
            cin >> maze[i][j];
        }
    }
    int ans = bfs();
    cout << ans << endl;
}
