#include <iostream>

using namespace std;
char maze[3][2];
int main(){
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            cin >> maze[i][j];
        }
    }
    cout << "end" << endl;
    cout << maze[0][0] << endl;
    cout << maze[2][1] << endl;

}