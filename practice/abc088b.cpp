#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec;
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int alice = 0;
    int bob = 0;
    for (int i=0;i<n;i++){
        if (i%2 ==0) alice += vec[i];
        else bob += vec[i];
    }
    cout << alice-bob << endl;
}
