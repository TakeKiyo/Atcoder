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
    ll n,m;
    cin >> n >> m;
    priority_queue<ll> pque;
    rep(i,n){
      ll a;
      cin >> a;
      pque.push(a);
    }

    rep(i,m){
        ll tmp_max = pque.top();
        pque.pop();
        pque.push(tmp_max / 2);
        cout << tmp_max/2 << endl;
    }
    ll ans = 0;
    while(!pque.empty()){
        cout << pque.top() << endl;
        ans += pque.top();
        pque.pop();
    }
    cout << ans << endl;

    
}