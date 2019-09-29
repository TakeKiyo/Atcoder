#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    ll n; cin >> n;
    vector<int> vec;
    rep(i,n){
        ll d;
        cin >> d;
        vec.push_back(d);
    }
    sort(all(vec));
    int f,s;
    f = n/2-1;
    s = n/2;
    cout << vec[s] - vec[f] << endl;
}