#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int w,h,n;
    cin >> w >> h >> n;
    int maxx=0,minx=w,maxy=0,miny=h;
    int ans;
    rep(i,n){
        int x,y,a;
        cin >> x >> y >> a;
        if (a==1){
            if (maxx < x) maxx = x;
        }
        if (a==2){
            if (minx > x) minx = x;
        }
        if (a==3){
            if (maxy < y) maxy = y;
        }
        if (a==4){
            if (miny > y) miny = y;
        }

    }
    ans = (minx-maxx) * (miny-maxy);
    if ((maxx>minx) || (maxy>miny)) ans = 0;
    cout << ans << endl;
}