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
    int a[n];
    int b[n];
    int c[n-1];
    rep(i,n){
        cin >> a[i];
    }
    int ans = 0;
    rep(i,n){
        cin >> b[i];
        ans += b[i];
    }
    rep(i,n-1){
        cin >> c[i];
    }
    rep(i,n-1){
        if (a[i]+1==a[i+1]) {
            ans += c[a[i]-1];
        }
    }
    cout << ans << endl;


    
}