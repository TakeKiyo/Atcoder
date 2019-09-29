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
    ll n,m;
    cin >> n >> m;
    vector<tuple<ll,ll,ll>> vec;
    rep(i,m){
        ll p,y;
        cin >> p >> y;
        vec.emplace_back(p,y,i);
    }  
    sort(all(vec),CompTupleBy<1>() );
    
    sort(all(vec));
    get<1>(vec[0]) = 1;
    for(int i=1;i<m;i++){
        if (get<0>(vec[i]) != get<0>(vec[i-1])){
            get<1>(vec[i]) = 1;
        }else{
            get<1>(vec[i]) = get<1>(vec[i-1])+1;
        }
    }
    
    sort(all(vec),CompTupleBy<2>() );
    rep(j,m){
        printf("%06d%06d",get<0>(vec[j]),get<1>(vec[j]));
        cout << endl;
    }
    
}