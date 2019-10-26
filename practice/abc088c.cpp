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
    int c11,c12,c13,c21,c22,c23,c31,c32,c33;
    cin >> c11;
    cin >> c12;
    cin >> c13;
    cin >> c21;
    cin >> c22;
    cin >> c23;
    cin >> c31;
    cin >> c32;
    cin >> c33;
    int a1,a2,a3,b1,b2,b3;
    a1 = 0;
    b1 = c11;
    b2 = c12;
    b3 = c13;
    a2 = c21-b1;
    a3 = c31 - b1;
    bool ok = true;
    if (c11 != a1 + b1){
        ok = false;
    }
    if (c12 != a1 + b2){
        ok = false;
    }
    if (c13 != a1 + b3){
        ok = false;
    }
    if (c21 != a2 + b1){
        ok = false;
    }
    if (c22 != a2 + b2){
        ok = false;
    }
    if (c23 != a2 + b3){
        ok = false;
    }
    if (c31 != a3 + b1){
        ok = false;
    }
    if (c32 != a3 + b2){
        ok = false;
    }
    if (c33 != a3 + b3){
        ok = false;
    }
    if (ok){
        cout <<"Yes" << endl;
    }else{
        cout << "No" << endl;
    } 


    
}