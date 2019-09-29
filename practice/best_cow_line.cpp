#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    char S[2000];
    string T;
    cin >> N;
    cin >> S;
    int a = 0,b=N-1;
    while (a<= b){
        bool left = false;
        for (int i=0;a+i<b;i++){
            if(S[a+i]< S[b-i]){
                left = true;
                break;
            }
            else if(S[a+i] > S[b-i]){
                left = false;
                break;
            }
        }
        if (left){
            T += S[a];
            a++;
        }else{
            T += S[b];
            b--;
        }
    }
    cout << T << endl;
}