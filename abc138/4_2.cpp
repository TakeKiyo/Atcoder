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
    ll n,q;
    cin >> n >> q;
    vector< vector<ll> > tree(n+1);
    vector<ll> ans(n+1);

    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        tree[a].push_back(b);
    }
    cout << "--" << endl;
    rep(i,q){
        ll p,x;
        cin >> p >> x; 
    }

    
}