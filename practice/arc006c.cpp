#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int w[n];
    vector<int> vec;
    vector<int>::iterator minIt;
    long long INF = 1000;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> w[i];
    }
    vec.push_back(w[0]);
    cout << "forかいし" << endl;
    for(int i=1;i<n;i++){
        // cout << "w[i]:" << w[i] << endl;
        int minindex  = -1;
        int temp=INF;
        cout << "vec:" << endl;
        for (int k=0;k<vec.size();k++){
            cout << vec[k] << endl;
        }
        cout << "ここまで" << endl;
        cout << "i:" << i << endl;
        cout << "w[i]:" << w[i] << endl;
        for (int j=0;j<vec.size();j++){
            if (w[i] <= vec[j]){
                if (vec[j] >= temp){
                    temp = vec[j];
                    minindex = j;
                }
            }
        }
        cout << temp << endl;
        if (minindex == -1){
            vec.push_back(w[i]);
            cout << "minindex=-1" << endl;
        }else{
            vec[minindex] = w[i];
            cout << "minindex:" << minindex << endl;
        }
        
    }
    cout << vec.size() << endl;
    
}