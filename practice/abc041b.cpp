#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
#define BIG 1000000007
using ll = long long ;

using namespace std;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    cout << ((a*b)%BIG * c)%BIG << endl;

    
}