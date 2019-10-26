#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 1000000000
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
    vector<vector<int>> fvec;
    vector<vector<int>> pvec;
    rep(i,n){
        vector<int> fv;
        rep(j,10){
            int f;
            cin >>f;
            fv.push_back(f);
        }
        fvec.push_back(fv);
    }
    rep(i,n){
        vector<int> pv;
        rep(j,11){
            int p;
            cin >>p;
            pv.push_back(p);
        }
        pvec.push_back(pv);
    }
    int ans = -INF;
    for(int bit=1;bit<(1<<10);bit++){
        int cc = 0;
        rep(i,n){
            int c=0;
            for(int j=0;j<10;j++){
                if (((bit>>j)&1) && (fvec[i][j]==1)){
                    c += 1;
                }
            }
            cc += pvec[i][c];
        }
        ans = max(ans,cc);
    }
    cout << ans << endl;



}