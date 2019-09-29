#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    ll w,h,x,y;
    cin >> w >> h >> x >> y;
    cout << double(w)*double(h)/2.0<< ' ';
    cout  << (x+x==w && y+y == h) << endl;
}