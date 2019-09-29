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
  map<string,ll> map;
  ll ans = 0;
  rep(i,n){
    string s;
    cin >> s;
    sort(all(s));
    map[s] += 1;
  }

  for (auto& p: map){
    ll s = p.second;
    ans += s*(s-1)/2;
  }
  cout << ans << endl;



    
}