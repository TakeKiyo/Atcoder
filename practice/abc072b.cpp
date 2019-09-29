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
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            ans += s[i];
        }
    }
    cout << ans << endl;
    
}