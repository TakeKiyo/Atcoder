#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;
    int max_ans = 0;
    if (x==1) cout << 1 << endl;
    else{
        for (int i=2;i<=(floor(sqrt(x))+1);i++){
            int res = 0;
            int j=0;     
            while (res<=x){
                j += 1;
                res = pow(i,j);
            }
            res = pow(i,j-1);
            if (res>=max_ans) max_ans = res;
        }
        cout << max_ans << endl;
    }
    
}