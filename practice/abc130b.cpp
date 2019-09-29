#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,x;
    int ans = 1;
    cin >> n>>x;
    vector<int> L(n);
    for (int i=0;i<n;i++) cin >> L[i];
    int d=0;
    int i=0;
    for (int i=0;i<n;i++){
        d = d + L[i];
        if (d<=x) ans += 1;
    }
    cout << ans << endl;
}