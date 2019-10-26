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
    int t,x,y;
    cin >> t >> x >> y;
    bool ok = true;
    if ((t % 2 == 0 && (x+y)%2 != 0) || (t % 2 != 0 && (x+y)%2 == 0)){
        ok = false;
    }
    if (t < x+y){
        ok = false;
    }
    rep(i,n-1){
        int t2,x2,y2;
        cin >> t2 >> x2 >> y2;
        if (((t2 - t) % 2 == 0 && (x2+y2-x-y)%2 != 0) || ((t2 - t) % 2 != 0 && (x2+y2-x-y)%2 == 0)){
            ok = false;
        }
        if ((t2-t) < (x2+y2-x-y)){
            ok = false;
        }
        t = t2;
        x = x2;
        y = y2;
    }
    if (ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    
}