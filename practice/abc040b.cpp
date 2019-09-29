#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long;

using namespace std;

int main(){
    int n; 
    cin >> n;
    int ans = INF;
    for(int i=0;i<=sqrt(n);i++){
        for (int j=0;j<=n;j++){
            if (i*j > n) break;
            int tmp=(n-(i*j)) + abs(i-j);
            ans = min(ans,tmp);
        }
    }
    cout << ans << endl;
    
}