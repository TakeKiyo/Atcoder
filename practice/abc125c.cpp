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
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i,n) cin >> vec[i];
    int max_num = *max_element(all(vec));
    int ans = 0;
    for(int i=0;i<n;i++){
        vector<int> copy(n-1);
        for(int j=0;j<n;j++){
            if (j==i) copy[i]=max_num;
            else copy[j] = vec[j];
        }
        int tmp=copy[0];  
        int tmp_ans; 
        for (int j=0;j<n-1;j++){
            tmp_ans = gcd(tmp,copy[j+1]);
            tmp = tmp_ans;
        }

        if (ans<tmp_ans) ans = tmp_ans;
    }
    cout << ans << endl;
    
}