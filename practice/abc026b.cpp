#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    rep(i,n){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(all(vec),greater<int>());
    int tmp = 0;
    int i=0;
    while(i<n){
        if (i%2 == 0){
            tmp +=pow(vec[i],2.0);
        }
        else tmp -= pow(vec[i],2.0);
        i++;
    }
    printf("%.8f\n",tmp*M_PI);

    
}