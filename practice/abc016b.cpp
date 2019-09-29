#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b==c && a-b==c){
        cout << "?" << endl;
    }else if (a+b==c){
        cout << "+" << endl;
    }else if (a-b==c){
        cout << "-" << endl;
    }else{
        cout << "!" << endl;
    }
    
}