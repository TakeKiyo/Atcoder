#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    string S;
    cin >> S;
    bool ok = true;
    if (S[0] != 'A'){
        ok = false;
    } 
    int cnt = 0;
    for (int i=2;i<S.length()-1;i++){
        if (S[i]=='C') cnt+=1;
    }
    if (cnt != 1) ok = false;
    int sml_cnt = 0;
    for(int i=0;i<S.length();i++){
        if ((S[i]>='a') && (S[i]<='z')) sml_cnt+=1;
    }
    if (sml_cnt != S.length()-2) ok = false;



    if (ok) cout << "AC" << endl;
    else cout << "WA" << endl;

    
}