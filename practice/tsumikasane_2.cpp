#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int w[100];
    vector<int> vec;
    int INF = 1000;
    for (int i=0;i<n;i++){
        cin >> w[i];

    }
    int ans;
    vec.push_back(w[0]);
    for(int i=1;i<n;i++){
        int put = 0;
        for (int j=0;j<vec.size();j++){
            cout << "vec" << endl;
            for (int k=0;k<vec.size();k++){
                cout <<vec[k] << endl;
            }
            if (w[i] <= vec[j]){
                put = 1;
                vec[j] = w[i];
                break;
            }
        }
        if (put==0){
            vec.push_back(w[i]);
        }
        
    }
    cout << vec.size() << endl;
    }
    
    
