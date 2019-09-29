#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n%2 == 0){
        cout << -1 << endl;
        return 0;
    }
    int ans = 1;
    string t= "b";
    while(t.size()<s.size()){
        if (ans % 3 ==1) t = "a"+t+"c";
        if (ans%3 == 2) t = "c" + t + "a";
        if (ans%3 == 0) t = "b"+t+"b";
        ans += 1;
        cout << t << endl;
    }
    if (t==s) cout << ans-1 << endl;
    else cout << -1 << endl;
    
}