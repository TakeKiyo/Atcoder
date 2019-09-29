#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
using namespace std;

ll ans = 0;
ll n;
ll dfs(ll a) {
    if (a>n) return 0;
    string tmp = to_string(a);
    int three = count(all(tmp),'3');
    int five = count(all(tmp),'5');
    int seven = count(all(tmp),'7');
    if ((three>0)&&(five>0)&&(seven>0)) ans += 1;
    dfs(a*10+3);
    dfs(a*10+5);
    dfs(a*10+7);
    return ans;
}
    


int main(){
    cin >> n;
    cout <<dfs(0) << endl;;
    
}