#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    rep(i,n){
        int l,r;
        cin >> l >> r;
        string tmp =s.substr(l-1,r-l+1);
        reverse(all(tmp));
        s = s.substr(0,l-1)+tmp+s.substr(r,s.size()-r+1);
    }
    cout << s << endl;
    
}