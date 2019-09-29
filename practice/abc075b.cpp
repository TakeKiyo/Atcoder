#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define all(x) (x).begin(),(x).end()
#define INF 10000000
using ll = long long ;

using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> maze(h+2);
    for(int i=0;i<=h+1;i++){
        if ((i==0) || (i==h+1)) {
            string str(w+2,'.');
            maze[i] = str;
        }else{
            string s;
            cin >> s;
            maze[i] = '.'+s+'.';   
        }
    }
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if (maze[i][j] != '#'){
                int cnt = 0;
                if (maze[i-1][j-1]=='#') cnt += 1;
                if (maze[i-1][j]=='#') cnt += 1;
                if (maze[i-1][j+1]=='#') cnt += 1;
                if (maze[i][j-1]=='#') cnt += 1;
                if (maze[i][j+1]=='#') cnt += 1;
                if (maze[i+1][j-1]=='#') cnt += 1;
                if (maze[i+1][j]=='#') cnt += 1;
                if (maze[i+1][j+1]=='#') cnt += 1;
                maze[i][j] = char(cnt+'0');;
            }
        }
    }
    for(int i=1;i<=h;i++){
        string substr = maze[i].substr(1,w);
        cout << substr << endl;
    }

   
}