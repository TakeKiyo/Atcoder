#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int INF = 1000000000;
int main(){
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i=0;i<n;i++) cin >> w[i];
    int min_abs = INF;
    for (int i=0;i<n;i++){
        int first_sum = 0;
        int second_sum = 0;
        for (int j=0;j<=i;j++) first_sum += w[j];
        for (int k=i+1;k<n;k++) second_sum += w[k];
        int sa = abs(first_sum-second_sum);
        if (sa <= min_abs) min_abs = sa;
    }
    cout << min_abs << endl;
}