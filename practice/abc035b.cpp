#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
  string s;
  int t;
  cin >>s;
  cin >> t;
  int x=0,y=0;
  int cnt = 0;
  rep(i,s.size()){
    if (s[i]=='L') x -=1;
    else if (s[i]=='R') x += 1;
    else if (s[i]=='U') y += 1;
    else if (s[i]=='D') y -= 1;
    else cnt += 1;
  }
  int ans = abs(x)+ abs(y);
  if (t==1) cout << ans + cnt << endl;
  else {
    if (ans>=cnt)   cout << ans-cnt << endl;
    else cout <<((cnt-ans)%2) << endl;
  }



}
