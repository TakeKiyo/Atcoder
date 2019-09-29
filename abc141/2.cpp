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
    int flag = 0;
        for(int i=0;i<s.size();i+=2){
            if (s[i]=='L') flag += 1;
        }
        for(int j=1;j<s.size();j+=2){
            if (s[j]=='R') flag += 1;
        }
    if (flag == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
   
    
}