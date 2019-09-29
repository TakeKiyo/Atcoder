#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    ll m;
    cin >> m;
    if (m<100) printf("%02d\n",0);
    else if (m<1000){
        int tmp = m/100;
        printf("%02d\n",tmp);
    }else if (m<=5000){
        cout << m/100 << endl;
    }else if ( m<=30000){
        cout << m/1000+50 << endl;
    }else if (m<=70000){
        cout << (m-30000)/5+80 << endl;
    }else{
        cout << 89 << endl;
    }

    
}