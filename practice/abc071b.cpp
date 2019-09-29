#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    for (char c = 'a';c<='z';c++){
        int cnt=count(all(s),c);
        if (cnt==0) {
            cout << c << endl;
            return 0;
        }
        
    }
    cout << "None" << endl;
    
}