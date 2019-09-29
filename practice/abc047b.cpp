#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int w,h,n;
    cin >> w >> h >> n;
    int maze[h+1][w+1] = {0};
    for(int i=0;i<n;i++){
        int x,y,a;
        cin >> x >> y >> a;
        int lx,ly;
        if (a==1){
            for(ly=0;ly<=h;ly++){
                for(lx=0;lx<x;lx++){
                    maze[ly][lx] = 1;
                }
            }
        }
        if (a==2){
            for(ly=0;ly<=h;ly++){
                for(lx=x+1;lx<=w;lx++){
                    maze[ly][lx] = 1;
                }
            }

        }
        if (a==3){
            for(ly=0;ly<y;ly++){
                for(lx=0;lx<=w;lx++){
                    maze[ly][lx] = 1;
                }
            }
        }
        if (a==4){
            for(ly=y;ly<=h;ly++){
                for(lx=0;lx<=w;lx++){
                    maze[ly][lx] = 1;
                }
            }
        }
    }
    int ans = 0;
    for(int i=0;i<=h;i++){
        for (int j=0;j<=w;j++){
            if (maze[i][j]==0) ans += 1;
        }
    }
    cout << ans << endl;
}