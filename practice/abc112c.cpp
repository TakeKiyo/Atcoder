#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
using namespace std;

int main(){
    int n;cin>>n;
    int x[n],y[n],h[n],flag;

    rep(i,n){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i]>=1) flag=i;
        
    }

    for(int px=0;px<=100;px++){
        for(int py=0;py<=100;py++){
            int H= h[flag]+abs(px-x[flag])+abs(py-y[flag]);
            bool ok = true;
            for(int i=0;i<n;i++){
                if(h[i] != max(H-abs(x[i]-px)-abs(y[i]-py),0)) ok=false;
            }
            if (ok){
                cout << px <<" " << py << " " << H << endl;
                return 0;
            }
        }
    }

    
}