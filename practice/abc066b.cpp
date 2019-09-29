#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=1;i<s.length();i++){
        if ((s.length()-i)%2 != 0) {
            continue;
        }
        bool ok = true;
        for(int j=0;j<(s.length()-i)/2;j++){
            if (s[j] != s[j+(s.length()-i)/2]) {
                ok = false;
            }
        }
        if (ok) {
            cout << s.length()-i << endl;
            return 0;
        }
       
    }
    
}