#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> dic;
    string w1;
    cin >> w1;
    bool flag = true;
    dic.push_back(w1);
    for (int i=1;i<n;i++){
        string w;
        cin >> w;
        int cnt = count(dic.begin(),dic.end(),w);
        if (cnt >=1) flag = false;
        if ((dic[i-1][dic[i-1].length()-1]) != (w[0])) flag = false;
        dic.push_back(w);
    }
    
    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}