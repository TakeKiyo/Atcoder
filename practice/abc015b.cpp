#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    int d=0;
    rep(i,n){
        int a;
        cin >> a;
        if (a==0) continue;
        else {
            s += a;
            d += 1;
        }
    }
    if (s%d==0) cout << s/d << endl;
    else cout<< s/d + 1 << endl;
    
}