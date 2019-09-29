#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> vec;
    rep(i,n) {
        int a; cin >> a;
        vec.push_back(a);
    }
    sort(all(vec));
    cout << vec[n-1] - vec[0] << endl;
}