#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> a;
    vector<string> b;
    rep(i,n) {
        string ta;
        cin >> ta;
        a.push_back(ta);
    }
    rep(i,m) {
        string tb;
        cin >> tb;
        b.push_back(tb);
    }
    cout << "----" << endl;
    for(int i=0;i<(n-m+1);i++){
        for (int j=0;j<(n-m+1);j++){
            if (b[0][0]==a[i][j]){
                bool ok = true;
                for (int sm_l=0;sm_l<m;sm_l++){
                    for (int sm_j=0;sm_j<m;sm_j++){
                        if (a[i+sm_l][j+sm_j] != b[sm_l][sm_j]) ok = false;
                    }
                }
                if (ok) cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
}