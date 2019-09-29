#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    ll ans;
    ans = pow((k-1),n-1);
    ans *= k;
    cout << ans << endl;
    
}