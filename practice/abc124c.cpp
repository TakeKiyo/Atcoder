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

int main(){
    string s;
    cin >> s;
    int ans = 0;
    for(int i=1;i<=s.size();i++){
        if (s[i]==s[i-1]){
            ans += 1;
            if (s[i-1]=='0') s[i]= '1'; 
            else s[i]= '0';
        }
    }
    cout << ans << endl;
    
}