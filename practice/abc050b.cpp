#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    int t[n];
    int sum = 0;
    rep(i,n) {
        cin >> t[i];
        sum += t[i];
    }
    int m;
    cin >> m;
    rep(i,m){
        int p,x;
        cin >> p >> x;
        cout << sum-(t[p-1] -x) << endl;
    }



    
}