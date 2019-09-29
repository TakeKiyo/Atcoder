#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    if (s=="a") cout << -1 << endl;
    else if (s[0]!='a') cout << "a" << endl;
    else cout << s.substr(0,s.size()-1) << endl;

    
}