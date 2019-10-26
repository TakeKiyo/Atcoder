#include <iostream>
#include <vector>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000

using namespace std;

using ll = long long ;

int main(){
    int n;
    cin >> n;
    vector<ll> vec(n);
    rep(i,n){
        cin >> vec[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<=n;j++){
            ans += vec[i]*vec[j];
        }
    }
    cout << ans << endl;


}