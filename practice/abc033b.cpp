#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
  int n;
  cin >> n;
  int pop_sum = 0;
  string tmp_name;
  int tmp_max=0;
  rep(i,n){
    string s;
    int p;
    cin >> s >> p;
    pop_sum += p;
    if (p>tmp_max){
      tmp_max=p;
      tmp_name = s;
    }
  }
  if (tmp_max > pop_sum/2) cout << tmp_name << endl;
  else cout << "atcoder" << endl;

}
