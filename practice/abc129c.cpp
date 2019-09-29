#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[m];
    rep(i,m) {
        cin >> a[i];
    }
    for(int i=0;i<m-1;i++){
        if (a[i+1]==a[i]+1){
            cout << 0 << endl;
            return 0;
        }
    }

    int ans = 1;
    int now=0;
    rep(i,m){
        int tmp=a[i]-1;
        int tmp2 = tmp -now; 
        if (tmp2 == 1){
            ans *= 1;
        }else if (tmp2==2){
            ans *= 2;
        }else{
            vector<int> kaidan;
            kaidan.push_back(1);
            kaidan.push_back(2);
            for(int j=2;j<tmp2;j++){
                kaidan.push_back(kaidan[j-2]+kaidan[j-1]); 
            }
            cout << kaidan[tmp2-1] << endl;;
            ans *= kaidan[tmp2-1];
        }
        now = a[i]+1;
    }
    cout << ans << endl;
}