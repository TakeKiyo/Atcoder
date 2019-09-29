#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> vec;
    vec.push_back(0);
    vec.push_back(0);
    vec.push_back(1);
    for(int i=3;i<n;i++){
        vec.push_back(vec[i-3%10007]+vec[i-2]%10007+vec[i-1]%10007);
    }
    cout << vec[n-1]%10007 << endl;

    
}