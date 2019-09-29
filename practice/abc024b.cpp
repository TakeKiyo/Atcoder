#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    ll n,t;
    cin >> n >> t;
    ll next = 0;
    ll ans =0;
    rep(i,n){
        int a;
        cin >> a;
        if (a<next){
            ans += (a+t-next);
        }else{
            ans += t;
        }
        next = a+t;
    }
    cout << ans << endl;

}