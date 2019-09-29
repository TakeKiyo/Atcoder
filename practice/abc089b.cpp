#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> SLis(n);
    for (int i=0;i<n;i++){
        char s;
        cin >> s;
        SLis[i] = s;
    }
    int ans = 0;
    int p_count = count(SLis.begin(),SLis.end(),'P');
    int w_count = count(SLis.begin(),SLis.end(),'W');
    int g_count = count(SLis.begin(),SLis.end(),'G');
    int y_count = count(SLis.begin(),SLis.end(),'Y');
    if (p_count > 0) ans += 1;
    if (w_count > 0) ans += 1;
    if (g_count > 0) ans += 1;
    if (y_count > 0) ans += 1;
    if (ans==3) cout << "Three" << endl;
    else if(ans==4) cout << "Four" << endl;
}