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
    int n;
    cin >> n;
    vector<int> h(n);
    int max_num = 0;
    rep(i,n) {
        cin >> h[i];
        max_num = max(max_num,h[i]);
    }
    int ans = 0;
    for(int i=max_num;i>=1;i--){
        vector<int> vec(n);
        rep(j,n) {
            if (h[j]>=i) vec[j]= 1;
            else vec[j] = 0;
        }
        bool ok = false;
        rep(j,n) {
            if (vec[j]==0) {
                ok = false;
            }else{
                if (ok) continue;
                else {
                    ans += 1;
                    ok = true;
                }
            }
        }
    }
     cout << ans << endl;

    
}