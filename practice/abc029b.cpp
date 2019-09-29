#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int ans = 0;
    rep(i,12) {
        string s;
        cin >> s;
        int cnt = count(all(s),'r');
        if (cnt > 0) ans += 1;
    }
    cout << ans << endl;    
}