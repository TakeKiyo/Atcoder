#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int s;
    cin >> s;
    vector<int> lis;
    lis.push_back(s);
    bool stop = true;
    while (stop){
        if (s%2==0) s = s/2;
        else s = 3*s+1;
        int result = *find(lis.begin(),lis.end(),s);
        if (result == *lis.end()) lis.push_back(s);
        else stop = false;
    }
    cout << lis.size()+1 << endl;
    
}