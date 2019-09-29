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
    string s,t;
    cin >> s >> t;
    map<char,char> smap,tmap;
    bool ok = true;
    rep(i,s.length()){
        char ws = s[i],wt=t[i];
        if (smap.count(ws)){
            if (smap[ws] != wt){
                ok = false;
                break;
            }
        }
        if (tmap.count(wt)){
            if (tmap[wt] != ws){
                ok = false;
                break;
            }
        }
        smap[ws] = wt;
        tmap[wt] = ws;
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}