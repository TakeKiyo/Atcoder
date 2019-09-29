#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string S;
    cin >> S;
    bool ok = true;
    rep(i,a){
        if (!(('0'<=S[i]) && (S[i]<='9'))) {
            ok = false;
        }
    }
    if (!(S[a]=='-')) {
        ok = false;
    }
    for(int i=a+1;i<=a+b;i++){
        if (!(('0'<=S[i]) && (S[i]<='9'))){ 
            ok = false;
        }
    }
    if (ok) puts("Yes");
    else puts("No");
}