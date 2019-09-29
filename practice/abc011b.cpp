#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if (i==0){
            if ('a'<= s[i] && s[i]<='z') s[i]= s[i]+'A'-'a';
        }
        else{
            if ('A'<=s[i] && s[i]<='Z') s[i] = s[i]+'a'-'A';
        }
    }
    cout << s << endl;

    
}