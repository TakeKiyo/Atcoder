#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int like[m+1] = {};
    for (int i=0;i<n;i++){
        int k;
        cin >> k;
        for (int j=0;j<k;j++){
            int a;
            cin >> a;
        
            like[a] = like[a] + 1;
        
        }
    }
    int ans = 0;
    for (int i=0;i<=m;i++){
       if (like[i]==n) ans += 1;
    }
    cout << ans << endl;
    // for (int i=0;i<=m;i++){
    //    cout << like[i] << endl;
    // }
    
}