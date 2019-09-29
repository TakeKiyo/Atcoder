#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    rep(i,n){
        int a;
        cin >>a;
        while(a%2 == 0 || a%3 == 2){
            a -= 1;
            ans += 1;
        }
    }
    cout << ans << endl;
    
}