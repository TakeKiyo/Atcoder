#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector<string> s(n);
    for (int i=0;i<n;i++) cin >> s[i];
    cin >> m;
    vector<string> t(m);
    int ans = 0;
    for (int i=0;i<m;i++) cin >> t[i];
    for (int i=0;i<n;i++){
        int s_cnt = count(s.begin(),s.end(),s[i]);
        int t_cnt = count(t.begin(),t.end(),s[i]);
        ans = max(ans,(s_cnt -t_cnt));
    }   
    cout << ans << endl;
    
}