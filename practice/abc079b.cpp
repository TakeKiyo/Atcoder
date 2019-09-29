#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll> l;
    if (n==1){
        cout << 1 << endl;
        return 0;
    }
    l.push_back(2);
    l.push_back(1);
    for (int i=2;i<=n;i++){
        ll next_num = l[i-1]+l[i-2];
        l.push_back(next_num);
    }
    cout << l[n] << endl;
    
    
}