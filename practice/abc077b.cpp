#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int  n;
    cin >> n;
    int i=0;
    int tmp=0;
    while(tmp<=n){
        i+=1;
        tmp = i*i;
    }
    cout << (i-1)*(i-1) << endl;
    }