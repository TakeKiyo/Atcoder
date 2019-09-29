#include <iostream>
#include <string>

using namespace std;

int main(){
    int  S;
    cin >> S;
    int first = S/100;
    int second = S%100;
    if ((first== 0 || 13<=first) &&(second== 0 || 13<=second)) cout << "NA" << endl;
    if ((1<=first && first <=12) && (second== 0 || 13<=second)) cout <<"MMYY" << endl;
    if ((1<=second && second <=12) && (first== 0 || 13<=first)) cout <<"YYMM" << endl;
    if ((1<=first && first <=12) && (1<=second && second <=12)) cout << "AMBIGUOUS" << endl;
}