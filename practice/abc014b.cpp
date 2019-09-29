#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    int ans=0;
    rep(i,n) cin >> a[i];
    for(int bit=n-1;bit>=0;bit--){
        if ((x >> bit)&1) {
            cout << 1 << endl;
            ans += a[bit];
        }else{
            cout << 0 << endl;
        }
    }
    cout << ans << endl;

    
}