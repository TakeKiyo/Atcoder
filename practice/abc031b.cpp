#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int l,h;
    cin >> l >> h;
    int n;
    cin >> n;
    rep(i,n){
        int a;
        cin >> a;
        if (a>h) cout << -1 << endl;
        else if (l<=a) cout << 0 << endl;
        else cout << l-a << endl;
    }
    
}