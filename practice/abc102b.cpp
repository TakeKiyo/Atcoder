#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int max_diff = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int diff = abs(a[i]-a[j]);
            if (diff>=max_diff) max_diff = diff;
        }
    }
    cout << max_diff << endl;
    
}