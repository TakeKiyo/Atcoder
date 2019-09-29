#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
 
using namespace std;
 
int main(){
    string s;
    cin >> s;
    vector<char> vec(s.length());
    rep(i,s.length()) vec[i] = s[i];
    for (char c='a';c<='z';c++){
        int cnt = count(all(vec),c);
        if (cnt>=2){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}