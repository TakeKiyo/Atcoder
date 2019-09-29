#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string w;
    cin >> w;
    bool ok = true;
    for (char c='a';c<='z';c++){
        if (count(w.begin(),w.end(),c)%2 != 0) ok = false;
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}