#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int start = max(a,c);
    int end = min(b,d);
    
    cout << max(0,end-start) << endl;
    
}