#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans =0;
    rep(i,n){
        string s;
        int d;
        cin >> s >> d;
        if (d<a) d = a;
        if (d>b) d=b;
        if (s == "East") ans += d;
        else if (s== "West") ans -= d;
    }
    if (ans==0) cout << 0 << endl;
    else if (ans>0) cout << "East " << ans << endl;
    else cout << "West " << ans*(-1) << endl; 

    
}