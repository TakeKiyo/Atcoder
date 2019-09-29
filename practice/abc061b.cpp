#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vec(n+1,0);
    rep(i,m) {
        int a,b;
        cin >> a >> b;
        vec[a] += 1;
        vec[b] += 1;
    }
    for(int i=1;i<=n;i++){
        cout << vec[i] << endl;
    } 
    
}