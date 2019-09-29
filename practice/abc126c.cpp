#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    double ans = 0;
    for(int i=1;i<=n;i++){
        float cnt = 0;
        int tmp = i;
        while (tmp<k){
            tmp *= 2;
            cnt += 1;
        }
        ans += pow(0.5,cnt) /n;
    }
    printf("%.15f\n",ans);
}