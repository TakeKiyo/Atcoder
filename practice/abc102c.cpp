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
  vector<int> vec;
  rep(i,n){
    ll a;cin >> a;
    vec.push_back(a-(i+1));
  }
  sort(all(vec));
  ll b = vec[(n-1)/2];
  cout << b << endl;
  ll ans = 0;
  rep(i,n){
    ans += abs(vec[i]-b);
  }
  cout << ans << endl;

}