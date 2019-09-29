#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    if (a.length()>b.length()){
        cout << "GREATER" << endl;
        return 0;
    }
    if (a.length()<b.length()){
        cout << "LESS" << endl;
        return 0;
    }
    for (int i=0;i<a.length();i++){
        if (a[i]==b[i]) continue;
        else if (a[i]>b[i]){
            cout << "GREATER" << endl;
            return 0;
        }
        else {
            cout << "LESS" << endl;
            return 0;
        }
    }
    cout << "EQUAL" << endl;
    
}