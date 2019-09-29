#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int min_ab= min(a,b);
    vector<int> gcdlist;
    int tmp=0;
    for (int i=1;i<=min_ab;i++){
        if ((a%i==0) && (b%i==0)) {
            gcdlist.push_back(i);
            tmp += 1;
        }
    }
    cout << gcdlist[tmp-k] << endl;
}