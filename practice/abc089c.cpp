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
    map<string,ll> mp;
    mp["M"] = 0;
    mp["A"] = 0;
    mp["R"] = 0;
    mp["C"] = 0;
    mp["H"] = 0;
    rep(i,n){
        string tmp;
        cin >> tmp;
        char first_ch = tmp[0];
        if (first_ch == 'M'){
            mp["M"] += 1;
        }else if(first_ch == 'A'){
             mp["A"] += 1;
        }else if(first_ch == 'R'){
             mp["R"] += 1;
        }else if(first_ch == 'C'){
             mp["C"] += 1;
        }else if(first_ch == 'H'){
             mp["H"] += 1;
        }
    }
    ll ans = 0;
    ans += mp["M"]*mp["A"]*mp["R"];
    ans += mp["M"]*mp["A"]*mp["C"];
    ans += mp["M"]*mp["A"]*mp["H"];
    ans += mp["M"]*mp["R"]*mp["C"];
    ans += mp["M"]*mp["R"]*mp["H"];
    ans += mp["M"]*mp["C"]*mp["H"];
    ans += mp["A"]*mp["R"]*mp["C"];
    ans += mp["A"]*mp["R"]*mp["H"];
    ans += mp["A"]*mp["C"]*mp["H"];
    ans += mp["R"]*mp["C"]*mp["H"];
    cout << ans << endl;

    
}