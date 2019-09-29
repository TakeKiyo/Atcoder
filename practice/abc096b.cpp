#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int ans=0;
    vector<int> list(3);
    list[0] = a;
    list[1] = b;
    list[2] = c;

    for (int i=0;i<k;i++){
        int max_flag=0;
        int max = list[0];
        if (max<list[1]) {
            max=list[1];
            max_flag = 1;
        }
        if (max<list[2]){
            max=list[2];
            max_flag=2;
        }
        list[max_flag] = list[max_flag]*2;
    }
    for (int i=0;i<3;i++){
        ans += list[i];
    }
    cout << ans << endl;
}