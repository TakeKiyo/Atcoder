#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        ans += (r-l+1);
    }
    cout << ans << endl;
}
