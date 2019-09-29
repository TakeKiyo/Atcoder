#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int w[100];
    vector<int> vec;
    int INF = 100000000000000;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> w[i];
    }

    vec.push_back(w[0]);
    for(int i=1;i<n;i++){
        int minindex  = -1;
        int temp=INF;
        for (int j=0;j<vec.size();j++){
            if (w[i] <= vec[j]){
                if (vec[j] <= temp){
                    temp = vec[j];
                    minindex = j;
                }
            }
        }
        if (minindex == -1){
            vec.push_back(w[i]);
        }else{
            vec[minindex] = w[i];
        }
        
        for (int i=0;i<n;i++){
        
    }
    }
    cout << vec.size() << endl;
    
}