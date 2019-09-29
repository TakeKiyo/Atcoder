#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string s;
    cin >> s;
    int a_cnt = count(all(s),'A');
    int b_cnt = count(all(s),'B');
    int c_cnt = count(all(s),'C');
    int d_cnt = count(all(s),'D');
    int e_cnt = count(all(s),'E');
    int f_cnt = count(all(s),'F');
    cout << a_cnt << " "<< b_cnt << " " << c_cnt << " "<< d_cnt << " "<< e_cnt << " "<< f_cnt << endl;

    
}