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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll w_sum[n+1];
    w_sum[0] = 0;
    rep(i,n){
        if (s[i]=='W'){
            w_sum[i+1] = w_sum[i] + 1;
        }else{
            w_sum[i+1] = w_sum[i];
        }
    }
    ll ans[n];
    ll answer = INF;
    rep(i,n){
        ll left = w_sum[i];
        ll right = (n-i-1)- w_sum[n] + w_sum[i+1];
        ans[i] = w_sum[i] + (n-i-1)- w_sum[n] + w_sum[i+1];
        if (ans[i] <= answer){
            answer = ans[i];
        }
    }
    cout << answer << endl;
    

    
}