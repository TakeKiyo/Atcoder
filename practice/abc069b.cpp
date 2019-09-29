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
    ans = s[0];
    ans += to_string(s.length()-2);
    ans += s[s.length()-1];
    cout << ans << endl;
    
}