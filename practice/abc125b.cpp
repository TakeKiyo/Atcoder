#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> V(n);
    for (int i=0;i<n;i++) cin >> V[i];
    vector<int> C(n);
    for (int i=0;i<n;i++) cin >> C[i];
    int ans = 0;
    for (int i=0;i<n;i++){
        if (V[i]-C[i]>=0) ans += (V[i]-C[i]);
    }
    cout << ans << endl;
}