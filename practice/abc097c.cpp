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
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> vec;
    set<string> vset;
    int n= s.size();
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=k;j++){
            string tmp = s.substr(i,j);
            if ((i+j<n+1) && (vset.find(tmp) == vset.end())){
                vec.push_back(tmp);
                vset.insert(tmp);
            }
        }
    }
    sort(all(vec));
    cout << vec[k-1] << endl;
    
}