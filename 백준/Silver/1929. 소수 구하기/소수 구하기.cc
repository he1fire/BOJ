#include <iostream>
using namespace std;
int main () {
    int M, N;
    cin >> M >> N;
    for (int i=M;i<=N;i++){
        int x=1;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                x=0;
                break;
                }
            }
        if (x && i!=1)
        cout << i << "\n";
        }
    return 0;
    }