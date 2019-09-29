#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    rep(i,s.size()){
        if (s[i]=='a' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='o') continue;
        else ans += s[i];
    }
    cout << ans << endl;

    
}