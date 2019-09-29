#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int ans = 0;
    for (int i=0;i<n;i++){
        int tmp_sum=c;
        for (int j=0;j<m;j++){
            int a;
            cin >> a;
            tmp_sum += (a*b[j]);
        }
        if (tmp_sum > 0) {
            ans += 1;
        }
    }
    cout << ans << endl;
    
}