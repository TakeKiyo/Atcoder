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
    int h,w;
    cin >> h >> w;
    char c[h+2][w+2];
    rep(i,h){
        rep(j,w){
            cin >> c[i+1][j+1];
        }
    }
    int count = 0;
    rep(i,h){
        rep(j,w){
            if (c[i+1][j+1]=='#' && c[i+1][j]!= '#' && c[i][j+1] != '#'&& c[i+2][j+1] != '#'&& c[i+1][j+2]!= '#') count += 1;
        }
    }
    if (count==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}