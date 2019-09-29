#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sa = b-a;
    int tmp=0;
    for (int i=1;i<=sa;i++){
        tmp += i;
    }
    cout << tmp-b << endl;
}