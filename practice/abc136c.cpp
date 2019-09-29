#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> vec;
    rep(i,n){
        int h;cin >> h;
        vec.push_back(h);
    }
    bool ok = true;
    for(int i=0;i<vec.size()-1;i++){
        if (vec[i]>vec[i+1]) ok = false;
        if (vec[i+1]==vec[i])continue;
        if (vec[i+1]>vec[i]) vec[i+1] -= 1;

    }
    if (ok) cout << "Yes" << endl;
    else cout  << "No" << endl;
    
}