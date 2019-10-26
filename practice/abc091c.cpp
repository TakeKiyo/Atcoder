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
    typedef pair<int,int>  coordinate;
    vector<coordinate> red;
    vector<coordinate> blue;
    rep(i,n){
      int a,b;
      cin >> a >> b;
      coordinate tmp;
      tmp.first = a;
      tmp.second = b;
      red.push_back(tmp);
    }
    rep(i,n){
      int c,d;
      cin >> c >> d;
      coordinate tmp;
      tmp.first = c;
      tmp.second = d;
      blue.push_back(tmp);
    }
    int count = 0;
    sort(all(blue));
    int r_flag[100] = {0};
    rep(i,n){
      int c=blue[i].first;
      int d = blue[i].second;
      int idx = -1;
      int b=0;
      rep(j,n){
        if (!r_flag[j] && c>red[j].first && d > red[j].second&&b<=red[j].second){
            b = red[j].second;
            idx = j;
        }
      }
      if (idx != -1){
          r_flag[idx] = 1;
          count += 1;
      }
    }
    cout << count << endl;

}