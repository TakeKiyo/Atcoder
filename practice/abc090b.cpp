#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;



int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    for (int i=a;i<=b;i++){
        bool ok = true;
        stringstream ss;
        ss << i;
        string front= ss.str();
        for (int j=0;j<front.length();j++){
            if ((front[j] != front[front.length()-j-1])) ok = false;
        }
        if (ok) ans += 1;
    }
    cout << ans << endl;
}