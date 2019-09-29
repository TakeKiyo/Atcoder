#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

int gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> l(n),r(n);
    int ans = 1;
    rep(i,n) cin >> a[i];
    rep(i,n-1) l[i+1] = gcd(l[i],a[i]);
    for(int i=n-1;i>=1;i--){
        r[i-1]=gcd(r[i],a[i]);
    }
    cout << ans << endl;
    rep(i,n) ans=max(ans,gcd(l[i],r[i]));
    cout << ans << endl;
}
