#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vec;
    rep(i,n){
        string s;
        cin >> s;
        vec.push_back(s);
    }
    int mx_cnt=0;
    string mx_name;
    rep(i,n){
        int cnt = count(all(vec),vec[i]);
        if (cnt >= mx_cnt) {
            mx_cnt = cnt;
            mx_name = vec[i];
        }
    }
    cout << mx_name << endl;
    
}