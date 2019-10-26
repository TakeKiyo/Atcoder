#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
int main(){
    int n;
    cin >> n;
    vector<ll> vec;
    rep(i,n){
        ll l;
        cin >> l;
        vec.push_back(l); 
    }
    sort(all(vec));
    ll minc,maxc;
    ll ans = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            ll a = vec[i];
            ll b = vec[j];
            maxc = a+b;
            int lessthanC = lower_bound(vec.begin(), vec.end(), maxc) - vec.begin()-1;
            if (lessthanC > j){
                ans += lessthanC-j;
            }
        }
    }
    
    cout << ans << endl;
}