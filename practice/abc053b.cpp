#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> vec;
    rep(i,s.length()) vec.push_back(s[i]);
    int a_cnt=0;
    int z_cnt =0;
    rep(i,s.length()) {
        if (vec[i]=='A') {
            a_cnt = i;
            break;
        }
    }
    rep(i,s.length()) {
        if (vec[i]=='Z') z_cnt = i;
    }
    cout << z_cnt -a_cnt + 1 << endl;
}   