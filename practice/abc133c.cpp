#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    ll l,r;
    cin >> l >> r;
    int tmp1,tmp2;
    tmp1 = l%2019;
    tmp2 = r % 2019;
    if ((r/(ll)2019 - l/(ll)2019) > 0) {
        cout << 0 << endl;

    }else{
        ll ans = INF;
        for(ll i=l;i<r;i++){
            for(int j=l+1;j<=r;j++){
                ll tmp= i%2019;
                tmp *= (j%2019);
                tmp %= 2019;
                ans = min(ans,tmp);
            }
        }
        cout << ans << endl;
    }
    
    
}