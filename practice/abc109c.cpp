#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
template< int id > struct CompTupleBy
{
  template<class T> 
  bool operator()( const T& a, const T& b ) const {
    return std::get<id>(a) < std::get<id>(b);
  }
};

using namespace std;

int main(){
    ll n,X;
    cin >> n >> X;
    vector<ll> vec;
    vec.push_back(X);
    rep(i,n) {
        ll x;
        cin >> x;
        vec.push_back(x);
    }
    sort(all(vec));
    vector<ll> diff;
    rep(i,n){
        diff.push_back(vec[i+1]-vec[i]);
    }
    ll ans = gcd(diff[0],diff[1]);
    rep(i,n-1){
        ans = gcd(ans,diff[i+1]);
    }
    cout << ans << endl;
    
}