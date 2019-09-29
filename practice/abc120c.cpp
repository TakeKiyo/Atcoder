#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    int cnt;
    do {
        cout << "--------" << endl;
        rep(i,s.size()) cout << s[i] << endl;
        cout << "--------" << endl;
        cnt = 0;
        vector<char> vec;
        for(int i=0;i<s.size();i++){
            if (s[i]=='0' || s[i]=='1') vec.push_back(s[i]);
        }
        cout << "vec.size():" << vec.size() << endl;
        rep(i,vec.size()) cout << vec[i] << endl;
        for(int i=1;i<=vec.size();i++){
            if ((vec[i]=='0'&& vec[i-1]=='1') || (vec[i]=='1' && vec[i-1]=='0')) {
                s[i] = 'a';
                s[i-1] = 'a';
                ans += 2;
                cnt += 1;
            }
        }
    }while(cnt>0);
    cout << ans << endl;
    
}