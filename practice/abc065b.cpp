#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    vec.push_back(0);
    rep(i,n) {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int tmp=1;
    int count = 0;
    while ((tmp != 0) && (tmp != 2)){
        int tmp2;
        tmp2 = vec[tmp];
        vec[tmp] = 0;
        tmp = tmp2;
        count += 1;
    }
    if (tmp == 0) cout << -1 << endl;
    if (tmp == 2) cout << count << endl;
    
}