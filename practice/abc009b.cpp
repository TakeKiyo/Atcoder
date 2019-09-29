#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    int mx = 0;
    rep(i,n){
        int a;
        cin >> a;
        mx = max(mx,a);
        vec.push_back(a);
    }
    int mx_cnt = count(all(vec),mx);
    sort(all(vec),greater<int>());
    rep(i,n){
        if (vec[i]==mx) continue;
        else{
            cout << vec[i] << endl;
            return 0;
        }
    }
    
}