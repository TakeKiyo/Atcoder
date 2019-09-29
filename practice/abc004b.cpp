#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    char maze[4][4];
    rep(i,4){
        rep(j,4) cin >> maze[i][j];
    }
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            cout << maze[i][j] << " ";
        }
        cout << endl;
    }

    
}