#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000

using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    sort(all(s));
    sort(all(t));
    reverse(all(t)); 
    if (s<t) puts("Yes");
    else puts("No");
    
}