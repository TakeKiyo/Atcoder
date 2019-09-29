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
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i,n) cin >> vec[i];
    sort(all(vec));
    double ans = (vec[0]+vec[1])/2.0;
    for(int i=1;i<n-1;i++){
        ans = (ans+vec[i+1])/2;
    }
    cout << ans << endl;
    
}