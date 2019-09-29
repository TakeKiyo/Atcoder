#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> vec;
    for(int i=0;i<h+2;i++){
        string s;
        if ((i==0) || (i==h+1)){
            string str(w+2,'#');
            s = str;
        }else{
            string tmp;
            cin >> tmp;
            s = '#' + tmp + "#";
        }
        vec.push_back(s);
    }
    for(int i=0;i<h+2;i++) cout << vec[i] << endl;
    
}