#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    vector<int> c_vec;
    rep(i,n) {
        int p;
        cin >> p;
        vec.push_back(p);
        c_vec.push_back(p);
    }
    sort(all(c_vec));
    int cnt = 0;
    
    for(int i=0;i<vec.size();i++){
        if (vec[i] != c_vec[i]) cnt += 1;
    }

    if (cnt<=2) cout << "YES" << endl;
    else cout << "NO" << endl;
     
}