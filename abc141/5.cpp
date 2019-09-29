#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
#define MINUS -10000000
using ll = long long ;
ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}
template< int id > struct CompTupleBy
{
  template<class T> 
  bool operator()( const T& a, const T& b ) const {
    return std::get<id>(a) < std::get<id>(b);
  }
};

using namespace std;
int max_three(int a,int b,int c){
    int mx = a;
    if (mx<b){
        mx = b;
    }
    if (mx < c){
        mx = c;
    }
    return mx;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int lis[n][n];
    lis[0][0] = MINUS;
    for(int i=1;i<n;i++){
        if (s[0]==s[i]){
            lis[0][i] = 1;
        }else{
            lis[0][i] = 0;
        }
    }
    
    int ans = 0;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n;j++){
            if (j==0){
                lis[i][j] = MINUS;
            }
            if (i>=j){
                lis[i][j] = MINUS;
            }else{
                if (s[i] == s[j]){
                    ans += 1;
                    lis[i][j] = lis[i-1][j-1] + 1;
                }else{
                    lis[i][j] = max(lis[i-1][j],lis[i][j-1]);
                }
            }
        }
    }
    
    if (lis[n-2][n-1] >= n/2){
        cout << lis[n-2][n-1] -1 << endl;
    }
    else{
        cout << lis[n-2][n-1]<< endl;
    }
}