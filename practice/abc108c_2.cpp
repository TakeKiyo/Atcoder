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
    ll n,k;
    cin >> n >> k;
    ll ans;
    ll b,c;
    if (k%2 == 1){
        ans = pow(n/k,3);
    }else{
        b=0;
        c=0;
        for(ll i=k/2;i<=n;i+=k/2){
            if (i%k==0){
                b += 1;
            }else{
                c+=1;
            }
            ans = pow(b,3)+pow(c,3);
        }
    }
    cout << ans << endl;
    
}