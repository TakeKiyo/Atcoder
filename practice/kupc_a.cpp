#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int ans=0;
        string S;
        cin >> S;
        for (int j=0;j<S.size();j++){
            if (j+5<=S.size()){
                if (S.substr(j,5) =="tokyo" || S.substr(j,5) == "kyoto"){
                    ans ++;
                    j+= 4;
                }
        }
        }
        cout << ans << endl;
    }
}