#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin >> n;
    int a,b;
    cin >> a >> b;
    int k;
    cin >> k;
    int alis[100];
    alis[a] = 1;
    alis[b]=1;
    bool ok = true;
    rep(i,k){
        int p;
        cin >> p;
        if (alis[p] == 1){
            ok = false;
        }else{
            alis[p]=1;
        } 
    }
    if (ok) cout << "YES" << endl;
    else cout << "NO" <<endl;
    
}