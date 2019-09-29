#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;cin>>n;
    vector<int> avec(n+1);
    vector<int> bvec(n);
    for(int i=0;i<=n;i++) cin >> avec[i];
    rep(i,n) cin >> bvec[i];
    int ans=0;
    rep(i,n){
        vector<int>::iterator maxIt= max_element(all(bvec));
        int maxIdx = distance(bvec.begin(),maxIt);
        int mn,sc;
        if (avec[maxIdx] < avec[maxIdx+1]) {
            mn = avec[maxIdx];
            sc= avec[maxIdx+1];
        }
        else {
            mn = avec[maxIdx+1];
            sc= avec[maxIdx];
        }
        if (bvec[maxIdx] >= mn){
            ans += mn;
            bvec[maxIdx] -= mn;
        }else{
            ans += bvec[maxIdx];
            bvec[maxIdx] = 0;
        }
        if (bvec[maxIdx] >= sc){
            ans += sc;
            bvec[maxIdx] -= sc;
        }else{
            ans += bvec[maxIdx];
            bvec[maxIdx] = 0;
        }
        bvec[maxIdx] = 0;
    }
    cout << ans << endl;
    
}