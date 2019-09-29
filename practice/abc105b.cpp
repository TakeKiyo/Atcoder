#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool ok=false;
    for (int i=0;i<=n/4;i++){
        for (int j=0;j<=n/7;j++){
            if (4*i+7*j==n) ok = true;
        }
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    

    
}