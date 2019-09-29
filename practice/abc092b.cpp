#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,d,x;
    cin >> n >> d >> x;
    int cnt = 0;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        int tmp=1;
        while (tmp<=d){
            cnt += 1;
            tmp += a;
        }
    }
    cout << cnt+x << endl;
}