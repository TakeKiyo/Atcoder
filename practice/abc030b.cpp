#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    double n,m;
    cin >> n >> m;
    if (n>12) n -=12;
    n = 30*n+0.5*m;
    m *= 6;
    float ans = min(abs(n-m),360-abs(n-m));
    cout << ans << endl;
    
}