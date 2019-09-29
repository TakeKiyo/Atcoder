#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;cin>>n;
    vector<ll> avec(n+1);
    vector<ll> bvec(n);
    for(ll i=0;i<=n;i++) cin >> avec[i];
    rep(i,n) cin >> bvec[i];
    ll ans=0;
    rep(i,n){
        if (avec[i]>=bvec[i]){
            ans += bvec[i];
        }else{
            ans += avec[i];
            bvec[i] -=avec[i];
            if (bvec[i]<=avec[i+1]){
                ans += bvec[i];
                avec[i+1] -= bvec[i];
            }else{
                ans += avec[i+1];
                avec[i+1] = 0;
            }
        }
    }
    cout << ans << endl;
    
}