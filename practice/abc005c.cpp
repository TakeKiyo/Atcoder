#include <iostream>



using namespace std;

int main(){
    int T,N;
    cin >> T >> N;
    int a[N];
    for (int i=0;i<N;i++) cin >> a[i];
    int M;
    cin >> M;
    int b[M];
    for (int i=0;i<M;i++) cin >> b[i];
    int a_index=0;
    if (N<M){
        cout << "no" << endl;
        return 0;
    }
    int cnt = 0;
    
    for (int i=0;i<M;i++){
        while (a_index < N){
            if (b[i] -T<= a[a_index] && a[a_index] <= b[i] ){
                cnt += 1;
                a_index +=1;
                break;
            }
            a_index += 1;

        }
    }
    if (cnt == M) cout << "yes" << endl;
    else cout << "no" << endl;

}