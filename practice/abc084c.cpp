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
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int c[n];
    int s[n];
    int f[n];
    rep(i,n-1){
        cin >> c[i] >> s[i] >> f[i];
    }
    for(int i=0;i<n-1;i++){
        int t=s[i]+c[i];
        for(int j=i+1;j<n-1;j++){
            if (t>s[j]){
                t += (f[j]-t%f[j])%f[j] + c[j];
            }else{
                t = s[j] + c[j];
            }
        }
        cout << t << endl;
    }
    cout << 0 << endl;

}