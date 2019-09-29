#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    string S;
    cin >> S;
    int max_ans = 0;
    for (int i=1;i<S.length();i++){
        int ans = 0;
        vector<char> first;
        vector<char> last;
        for (int j=0;j<i;j++){
            first.push_back(S[j]);
        }
        for (int j=i;j<S.length();j++){
            last.push_back(S[j]);
        }
        int cnt = 0;
        for (char c='a';c<='z';c++){
            bool left=false;
            bool right=false;
            vector<char>::iterator FIter = find(first.begin(),first.end(),c);
            vector<char>::iterator LIter = find(last.begin(),last.end(),c);
            if ((FIter != first.end()) && (LIter != last.end())) cnt += 1;
        }
        if (cnt>=max_ans) max_ans = cnt;
    }
    cout << max_ans << endl;
}