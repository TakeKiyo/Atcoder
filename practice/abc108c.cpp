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
    int n,k;
    cin >> n >> k;
    if (k % 2==1){
        cout << pow((n/k),3) << endl;
    }
    else{
        k /= 2;
        cout << pow((n/k/2),3)+pow((n/k-n/k/2),3) << endl;
    }
    
}