#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string wa;
    wa = to_string(a) + to_string(b);
    int num = stoi(wa);
    bool ok=false;
    for (int i=0;i<1000;i++){
        if (i*i==num) ok = true;
    }
    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
 }