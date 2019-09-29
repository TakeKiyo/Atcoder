#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string o,e;
    cin >> o >> e;
    string ans = "";
    for (int i=0;i<e.length();i++){
        ans += o[i];
        ans += e[i];
    }
    if (o.length() != e.length()) ans += o[o.length()-1];
    cout << ans << endl;
}