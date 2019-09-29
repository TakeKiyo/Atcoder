#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    rep(i,s.size()){
        if (s[i]=='0'){
            ans += '0';
        }
        else if (s[i]=='1'){
            ans += '1';
        }else {
            if (ans.size() == 0) continue;
            else ans.pop_back();
        }
    }
    cout << ans << endl;
    
}