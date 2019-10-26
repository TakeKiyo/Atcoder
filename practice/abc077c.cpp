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
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> A;
    vector<ll> B;
    vector<ll> C;
    rep(i,n){
        ll tmp;cin >> tmp;
        A.push_back(tmp);
    }
    rep(i,n){
        ll tmp;cin >> tmp;
        B.push_back(tmp);
    }
    rep(i,n){
        ll tmp;cin >> tmp;
        C.push_back(tmp);
    }
    sort(all(A));
    sort(all(C));
    ll ans = 0;
    for(ll b : B){
        auto a_idx = lower_bound(all(A),b);
        auto c_idx = upper_bound(all(C),b);
        ll size_a = distance(A.begin(),a_idx);
        ll size_c = distance(c_idx,C.end());
        ans += (size_a * size_c);
    }
    cout << ans << endl;

    
    
}