#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    ll ans = 1;
    for(int i=1;i<=n;i++){
        ans *= i;
        ans = ans % 1000000007;
    }
    cout << ans << endl;


    
}