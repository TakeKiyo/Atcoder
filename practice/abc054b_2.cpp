#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    char A[50][50],B[50][50];

    rep(i,n) {
       rep(j,n) cin >> A[i][j];
    }
    rep(i,m) {
        rep(j,m) cin >> B[i][j];
    }

    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i+m-1>=n || j+m-1>=n) continue;
            
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