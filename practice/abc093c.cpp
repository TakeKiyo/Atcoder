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
    int a,b,c;
    cin >> a >> b >> c;
    int tm = max(a,b);
    int mx = max(tm,c);
    int diff1,diff2;
    if (mx == a){
        diff1=mx-b;
        diff2=mx-c;
    }else if(mx==b){
        diff1=mx-a;
        diff2=mx-c;
    }else{
        diff1=mx-a;
        diff2=mx-b;
    }
    int diff_diff = abs(diff1-diff2);
    int min_diff = min(diff1,diff2);
    if (diff_diff % 2 == 0){
        cout << min_diff + diff_diff/2 << endl;
    }else{
        cout << min_diff + diff_diff/2 + 2 << endl;
    }
}