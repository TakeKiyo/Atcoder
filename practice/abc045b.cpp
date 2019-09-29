#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    string A,B,C;
    cin >> A >> B >> C;
    char tmp = 'a';
    char ans;
    while (true){
        if (tmp=='a'){
            if (A.size() == 0){
                ans = 'A';
                break;
            }
                tmp = A[0];
                A.erase(A.begin());
            
        }else if (tmp=='b'){
            if (B.size() == 0){
                ans = 'B';
                break;
            }
                tmp = B[0];
                B.erase(B.begin());
            
        }else{
            if (C.size() == 0){
                ans = 'C';
                break;
            }
                tmp = C[0];
                C.erase(C.begin());
            
        }
    }
    cout << ans << endl;



    
}