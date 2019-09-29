#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i,n){
        cin >> vec[i];
    }
    sort(all(vec),greater<int>());
    int ans=0;
    rep(i,k) ans += vec[i];
    cout << ans << endl;
}