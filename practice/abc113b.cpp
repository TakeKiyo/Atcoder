#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int t,a;
    cin >> n;
    cin >> t >> a;
    int ans=100000000000000;
    int ans_count=-1;
    int d;
    for (int i=0;i<n;i++){
        int h;
        cin >>h;
        d =abs((1000*t- 6*h)-1000*a);
        if (ans>d){
            ans_count = i+1;
            ans = d;
        } 
    }
    cout << ans_count << endl;
    
}