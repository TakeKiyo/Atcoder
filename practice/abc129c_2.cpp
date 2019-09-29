#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

const long long mod=1e9+7;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool> ok(n+1,true);
    rep(i,m) {
        int a;
        cin >> a;
        ok[a] = false;
    }
    vector<int> dp(n+1);
    dp[0]= 1;
    if (ok[1]==1) dp[1]=1;
    else dp[1] = 0;
    for(int i=2;i<=n;i++){
        if (ok[i]==true){
            dp[i] = (dp[i-1]+dp[i-2])%mod;
        }else{
            dp[i] = 0;
        }
    }
    cout << dp[n] << endl;

   
}