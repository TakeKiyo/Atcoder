#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans=1000;
    for (int i=0;i<s.length()-2;i++){
        int num = 100*(s[i]-'0')+10*(s[i+1]-'0')+(s[i+2]-'0');
        ans = min(ans,abs(753-num));
    }
    cout << ans << endl;
    
}