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
vector<int> l;
int N,A,B,C;
int dfs(int cur,int a,int b,int c){
    if (cur==N){
        if (min({a,b,c})>0) return abs(A - a) + abs(B - b) + abs(C - c) - 30;
        else return INF;
    }
    int ret0 = dfs(cur+1,a,b,c);
    int ret1 = dfs(cur+1,a+l[cur],b,c)+10;
    int ret2 = dfs(cur+1,a,b+l[cur],c)+10;
    int ret3 = dfs(cur+1,a,b,c+l[cur])+10;
    return min({ret0,ret1,ret2,ret3});
    
}
int main(){
    cin >> N >> A >> B >> C;
    rep(i,N) {
        int t;
        cin >> t;
        l.push_back(t);
    }
    int ans = dfs(0,0,0,0);
    cout << ans << endl;

    
}