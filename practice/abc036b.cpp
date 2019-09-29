#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
  int n;
  cin >> n;
  char s[n][n];
  rep(i,n){
    rep(j,n) cin >> s[i][j];
  }
  for(int i=0;i<n;i++){
    for(int j=n-1;j>=0;j--){
      cout << s[j][i];
    }
    cout << endl;
  }
}
