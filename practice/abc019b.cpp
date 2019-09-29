#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> vec;
    char tmp = s[0];
    string str ={s[0]};
    for(int i=1;i<=s.size();i++){
        if (s[i]==tmp){
            str += s[i];
            tmp = s[i];
        }else{
            vec.push_back(str);
            str = s[i];
            tmp = s[i];
        }
    }
    string ans;
    rep(i,vec.size()) {
        ans += vec[i][0]+to_string(vec[i].size());
    }
    cout << ans << endl;
    
    
}