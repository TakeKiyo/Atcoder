#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    bool ok = true;
    rep(i,s.size()){
        if (s[i]==t[i]) {
            continue;
        }else if(s[i]== '@'){
            if (t[i]=='@' || t[i]=='a' || t[i]=='t' || t[i]=='c' || t[i]=='o' || t[i]=='d' || t[i]=='e' || t[i]=='r') {
                continue;
            }else{
                ok = false;
            }
        } else if(t[i]== '@'){
            if (s[i]=='@' || s[i]=='a' || s[i]=='t' || s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='r'){
                continue;
            } else{
                ok = false;
            }
        }else{
            ok = false;
        }
    }
    if (ok) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
    
}