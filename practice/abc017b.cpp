#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string x;
    cin >> x;
    int cnt = 0;
    for(int i=0;i<x.size();i++){
        if (x[i]=='o' || x[i]== 'k' || x[i]=='u') cnt+=1;
        else if (x[i]=='c'){
            if (x[i+1]== 'h'){
                cnt += 2;
                i += 1;
            }else{
                cout << "NO" << endl;
                return 0;
            }
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
}