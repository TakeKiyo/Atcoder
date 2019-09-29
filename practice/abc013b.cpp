#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (a<b){
        cout << min(b-a,10+a-b) << endl;;
    }else{
        cout << min(a-b,10+b-a) << endl;
    }
    
}