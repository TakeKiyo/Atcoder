#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> vec;
    if (s.size()<k){
        cout << 0 << endl;
        return 0;
    }
    if (s.size()==k){
        cout << 1 << endl;
        return 0;
    }

    rep(i,s.size()-k+1) {
        string tmp = s.substr(i,k);
        int cnt = count(all(vec),tmp);
        if (cnt == 0) vec.push_back(tmp);
    }
    cout << vec.size() << endl;
}