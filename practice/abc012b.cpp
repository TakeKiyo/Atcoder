#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n<60)  printf("00:00:%02d\n",n);
    else if (n<3600) printf("00:%02d:%02d\n",n/60,n%60);
    else printf("%02d:%02d:%02d\n",n/3600,(n%3600)/60,(n%3600)%60);
    
}