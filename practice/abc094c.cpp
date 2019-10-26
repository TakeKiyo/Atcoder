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
    vector<int> vec(n);
    vector<int> sorted(n);
    rep(i,n){
        int tmp;cin>>tmp;
        vec[i]=tmp;
        sorted[i] = tmp;
    }
    sort(all(sorted));
    int first = sorted[n/2-1];
    int second = sorted[n/2];
    rep(i,n){
        if (vec[i]<=first){
            cout << second << endl;
        }else{
            cout << first << endl;
        }
    }
}