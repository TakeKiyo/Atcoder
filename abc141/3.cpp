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
    ll n;
    cin >> n;
    ll k,q;
    cin >> k >> q;
    vector<ll> vec(n);
    rep(i,n) vec[i] = k-q;
    rep(i,q){
        ll a;
        cin >> a;
        vec[a-1] += 1;
    }
    rep(i,n){
        if(vec[i]>0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}