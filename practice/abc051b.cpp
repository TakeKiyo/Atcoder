#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int k,s;
    cin >> k >> s;
    int ans = 0;
    for(int x=0;x<=k;x++){
        for (int y=0;y<=k;y++){
            int z = s-x-y;
            if ((0<=z) && (z <= k)) ans += 1;
        }
    }
    cout << ans << endl;
    
}