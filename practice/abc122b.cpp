#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    
    int max = 0;
    int tmp=0;

    for(int i=0;i<S.length();i++){
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
            tmp +=1;
            if (max<tmp) max=tmp;
        }else{
            tmp=0;
        }
    }
    cout << max << endl;
}