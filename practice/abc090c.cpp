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
    if (n>m) swap(n,m);
    if (n==1){
        if (m==1){
            cout << 1 << endl;
        }else{
            cout << m-2 << endl;
        }
    }else{
        cout << (n-2)*(m-2) << endl;
    }
    
}