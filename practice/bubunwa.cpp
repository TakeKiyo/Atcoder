#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int p[N];
    int w = 0;
    for (int i=0;i<N;i++){
        cin >> p[i];
        w += p[i];
    }
    int flag[w+1] = {};
    int dp[N][w];
    for (int j=0;j<w+1;j++){
        if (j == 0 || j==p[0]) dp[0][j] = 1;
        else dp[0][j] = 0;
    }
    for (int i=1;i<N;i++){
        for (int j=0;j<w+1;j++){
            if (dp[i-1][j] == 1 || (dp[i-1][j-p[i]]== 1 && (j-p[i])>=0)){
                dp[i][j]=1;
                if (flag[j] == 0) flag[j] = 1;      
            } 
            else dp[i][j] = 0;
        }
    }
    int ans = 0;
    for (int i=0;i<w+1;i++) {
        if (flag[i]==1) ans +=1;
    }
    cout << ans << endl;
}