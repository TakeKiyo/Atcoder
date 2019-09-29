#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> vec(n);
    rep(i,n) cin >> vec[i];
    ll ans = vec[0];
    for(int i=1;i<n;i++){
        ans = gcd(ans, vec[i]);
    }
    cout << ans << endl;
    
    
}