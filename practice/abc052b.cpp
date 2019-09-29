#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    int tmp=0;
    rep(i,n){
        if (s[i]=='D') tmp -= 1;
        else {
            tmp += 1;
            if (tmp > ans) ans =tmp;
        }
    }
    cout << ans << endl;
    
}