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
    int a1[n];
    int a2[n];
    rep(i,n){
        cin >> a1[i];
    }
    rep(i,n){
        cin >> a2[i];
    }
    int ans = a1[0]+a2[n-1];
    for(int i=n-1;i>0;i--){
        ans += a1[i];
    }
    int first=0,second=0,tmp_diff;
    int diff =0;
    for(int i=n-1;i>0;i--){
        first +=a1[i];
        second += a2[i-1];
        tmp_diff = second - first;
        diff = max(diff,tmp_diff);
    }
    cout << ans + diff << endl;
    
}