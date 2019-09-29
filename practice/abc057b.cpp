#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 100000000
using ll = long long ;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> avec;
    vector<int> bvec;
    rep(i,n) {
        int a,b;
        cin >> a >> b;
        avec.push_back(a);
        bvec.push_back(b);
    }

    vector<int> cvec;
    vector<int> dvec;
    rep(i,m) {
        int c,d;
        cin >> c >> d;
        cvec.push_back(c);
        dvec.push_back(d);
    }
    for(int i=0;i<n;i++){
        int ans = 0;
        int tmp=(abs(avec[i]-cvec[0]) + abs(bvec[i]-dvec[0]));
        for (int j=1;j<m;j++){
            int tmp2 = (abs(avec[i]-cvec[j]) + abs(bvec[i]-dvec[j]));
            if (tmp2 < tmp) {
                tmp = tmp2;
                ans = j;
            }
        }
        cout << ans+1 << endl;
    }
    
}