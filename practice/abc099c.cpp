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
    vector<ll> dp(n+1);
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        dp[i] = i;
        for(int j=6;j<=i;j*=6){
            dp[i] = min(dp[i],dp[i-j]+1);
        }
        for(int j=9;j<=i;j*=9){
            dp[i] = min(dp[i],dp[i-j]+1);
        }
    }
    cout << dp[n] << endl;
}