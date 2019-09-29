#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using namespace std;

int main(){
    int n;cin >>n;
    vector<int> vec(n);
    rep(i,n) cin >> vec[i];
    sort(all(vec),greater<int>());
    int ans =0;
    int tmp=INF;
    rep(i,n) {
        if(vec[i]<tmp){
            ans +=1;
            tmp = vec[i];
        }
    }
    cout << ans << endl;
    
}