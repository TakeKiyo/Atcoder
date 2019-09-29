#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int small= 10000000;
    for (int i=0;i<n;i++){
        int m;
        cin >> m;
        x -= m;
        if (m<=small) small=m;
    }
    int cnt=n;
    cnt += x/small;
    cout << cnt << endl;

}