#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int tmp= min(x,(k-x));
        ans += 2*tmp;
    }
    cout << ans << endl;
}