#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;

    int sum = 0;
    rep(i,n) {
        int a;
        cin >> a;
        sum += a;
        vec.push_back(a);
    }
    if (sum%n != 0) {
        cout << -1 << endl;
        return 0;
    }
    int tmp=0;
    int ans = 0;
    rep(i,n){
        tmp += vec[i];
        if (sum/n*(i+1) != tmp) ans += 1;
        
    }
    cout << ans << endl;

    
}