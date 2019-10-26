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
    int a[n+2];
    a[0] = 0;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    a[n+1] = 0;
    for(int i=1;i<=n+1;i++){
        sum += abs(a[i]-a[i-1]);
    }
    for(int i=1;i<=n;i++){
        if ((a[i-1]<=a[i] && a[i]<=a[i+1]) || (a[i-1]>=a[i] && a[i]>=a[i+1])) {
            cout << sum << endl;
        }
        else if((a[i-1] <= a[i] && a[i] >= a[i+1] && a[i-1]>=a[i+1]) || (a[i-1] >= a[i] && a[i] <= a[i+1] && a[i-1]<=a[i+1])){
            cout << sum - (abs(a[i]-a[i-1])*2) << endl;
        }else{
            cout << sum - (abs(a[i+1]-a[i])*2) << endl;
        }
    }
}