#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int highest = 0;
    int ans = 0;
    for (int i=0;i<n;i++){
        int p;
        cin >> p;
        ans += p;
        if (p>=highest) highest = p;
    }
    ans -= (highest/2);
    cout << ans << endl;
}