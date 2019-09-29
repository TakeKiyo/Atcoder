#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    vector<string> vec;
    rep(i,n) {
        string tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(all(vec));
    string ans;
    rep(i,n) {
        cout << vec[i] << endl;
        ans += vec[i];
    }
    cout << ans << endl;

    
}