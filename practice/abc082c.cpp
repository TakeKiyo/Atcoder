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

    map<int,int> mp;
    rep(i,n){
        int a;
        cin >> a;
        mp[a] += 1;
    }
    int ans = 0;
    for(auto& item : mp){
        if (item.first > item.second) ans += item.second;
        else if(item.first < item.second) ans += item.second-item.first;
    }
    cout << ans << endl;
}