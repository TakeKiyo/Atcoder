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
    ll n,v;
    cin >> n;
    vector<pair<ll,ll>> odd(1000001);
    vector<pair<ll,ll>> even(1000001);
    rep(i,n){
        cin >> v;
        if (i%2){
            even[v].first += 1;
            even[v].second = v;
        }else{
            odd[v].first += 1;
            odd[v].second = v;
        }
    }
    sort(all(even),greater<pair<ll,ll>>());
    sort(all(odd),greater<pair<ll,ll>>());
    if (even[0].second != odd[0].second){
        cout << n-(even[0].first+odd[0].first)<<endl;
    }else{
        cout << min(n-(even[0].first+odd[1].first),n-(even[1].first+odd[0].first))<<endl;
    }

    
}