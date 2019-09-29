#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n<=9) cout << n << endl;
    else if (n<=99) cout << 9 << endl;
    else if (n<=999) cout << n-100+10 << endl;
    else if (n<=9999) cout << 909 << endl;
    else if (n<=99999) cout << n-10000+910 << endl;
    else cout << 90909 << endl;
}