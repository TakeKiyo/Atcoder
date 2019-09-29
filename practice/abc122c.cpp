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
    int n,q;
    string s;
    cin >> n >>q>> s;
    vector<int> cnt(n);
    cnt[0] = 0;
    for(int i=1;i<=n;i++){
        if (s[i]=='C' && s[i-1]=='A') cnt[i] = cnt[i-1]+1;
        else cnt[i] = cnt[i-1];
    }
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout << cnt[r-1]-cnt[l-1] << endl;

    }

    
}