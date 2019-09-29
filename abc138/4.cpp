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


ll n,q;
vector<vector<ll>> tree(1000000);
vector<ll> ans(1000000);
void dfs(ll selfidx,ll nm);


int main(){
    cin.tie(0); 
    ios::sync_with_stdio(false);
    cin >> n >> q;
    rep(i,n-1){
        ll a,b;
        cin >> a >> b;
        tree[a].push_back(b);
    }
    vector<ll> tmp(1000000);
    rep(i,q){
        ll p,x;
        cin >> p >> x;
        tmp[p] += x;
    }
    for(int i=1;i<=n;i++){
        if (tmp[i] != 0){
            dfs(i,tmp[i]);
        }
    }
    for(int k=1;k<=n;k++){
        cout << ans[k] << " ";
    }
    cout << endl;


}
void dfs(ll selfidx,ll nm){
    ans[selfidx] += nm;
    if (tree[selfidx].size() == 0) return;
    else {
        for(ll cnt=0;cnt<tree[selfidx].size();cnt++){
            dfs(tree[selfidx][cnt],nm);
        }
    }
    return;

}