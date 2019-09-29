#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans =0;
    for (int i=1;i<=n;i++){
        string s = to_string(i);
        int tmp=0;
        rep(j,s.length()){
            int t = (int)(s[j]-'0');
            tmp += t;
        }
        if ((a<= tmp) && (tmp <=b)) ans += i;
    }
    cout << ans << endl;
}