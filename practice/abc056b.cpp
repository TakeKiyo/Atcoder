#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int w,a,b;
    cin >> w >> a >> b;
    int start = max(a,b);
    int end = min(a+w,b+w);
    if ((start-end)>0) cout << (start-end)<< endl;
    else cout << 0 << endl;
    
}