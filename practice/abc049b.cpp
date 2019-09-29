#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> cvec;
    rep(i,h) {
        string c;
        cin >> c;
        cvec.push_back(c);
    }
    rep(i,h) {
        cout << cvec[i] << endl;
        cout << cvec[i] << endl;
    }
    
}