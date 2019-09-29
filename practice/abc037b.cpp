#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> vec(n,0);
  rep(i,q){
    int l,r,t;
    cin >> l >> r >>t;
    for(int j=l-1;j<r;j++){
      vec[j]= t;
    }
  }
  rep(i,n) cout << vec[i] << endl;
}
