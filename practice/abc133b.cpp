#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<vector<int> > x(n, vector<int>(d));
    int ans=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<d;j++){
            cin >> x[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            int calc = 0;
            for (int k=0;k<d;k++){
                calc += (abs(x[i][k]-x[j][k]))*(abs(x[i][k]-x[j][k]));
            }
    
            int flag = 0;
            for(int p=0;p<=calc;p++){
                if(p*p==calc) flag=1;
            }
            if (flag){
                
                ans += 1;
            } 
        }
    }
    cout << ans << endl;
}