#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> maze(n+1);
    for (int i=0;i<n+1;i++) maze[i] = 0;
    for (int i=0;i<m;i++){
        int a; cin >> a;
        maze[a] = 1;
    }
    int first=0;
    int last = 0;
    for (int i=0;i<x;i++){
        if (maze[i+1] ==1) first += 1;
    }
    for (int i=x;i<n;i++){
        if (maze[i+1] == 1) last += 1;
    }
    cout << min(first,last) << endl;

    
}