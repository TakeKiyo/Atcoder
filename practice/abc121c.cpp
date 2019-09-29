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
typedef pair<ll,ll> AB;

int main(){
    int n,m;
    cin >> n >> m;
    ll ans = 0;
    vector<AB> vec(n);
    rep(i,n) {
        ll a,b;
        cin >> a >> b;
        vec[i].first = a;
        vec[i].second= b;
    }
    sort(all(vec));
    for(int i=0;i<n;i++){
        if (vec[i].second<=m){
            m -= vec[i].second;
            cout << vec[i].second << endl;
            cout << vec[i].first * vec[i].second;
            ans += vec[i].first * vec[i].second;
        }
        else {
            ans += vec[i].first * m;
            cout << ans << endl;
            return 0;
        }
        if (m==0) {
            cout << "m=0" << "i:" << i << endl;
            cout << ans << endl;
            return 0;
        }
    }

}