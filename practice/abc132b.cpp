#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans=0;
    vector<int> p(n);
    for (int i=0;i<n;i++){
        cin >> p[i];
    }
    for (int i=1;i<n-1;i++){
        if ((p[i-1]<p[i] && p[i]<p[i+1]) || (p[i-1]>p[i] && p[i]>p[i+1])) ans += 1;
    }
    cout << ans << endl;
}