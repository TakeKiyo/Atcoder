#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 100000000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
using namespace std;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> vec(n);
    rep(i,n) cin >> vec[i];
    ll ans = INF;
    sort(all(vec));
    for(int i=0;i<=n-k;i++){
        ll tmp = vec[i+k-1]-vec[i];
        ans = min(ans,tmp);
    }
    cout << ans << endl;
    
}