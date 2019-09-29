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
    int zero = count(all(s),'0');
    int one = count(all(s),'1');
    cout << 2*min(zero,one) << endl;
    
}