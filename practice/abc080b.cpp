#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000

using namespace std;

int main(){
    int n; cin >> n;
    int fx=0;
    int tmp=n;
    rep(i,9){
        fx += tmp % 10;
        tmp /= 10;
    }
    if (n%fx == 0) puts("Yes");
    else puts("No");
    
}