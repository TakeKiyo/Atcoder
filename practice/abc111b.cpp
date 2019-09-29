#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n<=111) cout << 111 << endl;
    else if (111<n && n <= 222) cout << 222 << endl;
    else if (222<n && n <= 333) cout << 333 << endl;
    else if (333<n && n <= 444) cout << 444 << endl;
    else if (444<n && n <= 555) cout << 555 << endl;
    else if (555<n && n <= 666) cout << 666 << endl;
    else if (666<n && n <= 777) cout << 777 << endl;
    else if (777<n && n <= 888) cout << 888 << endl;
    else if (888<n && n <= 999) cout << 999 << endl;
}