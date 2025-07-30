#include <iostream>
using namespace std;
int main () {
    int M, N, min=987654321, cnt=0;
    cin >> M >> N;
    for (int i=M;i<=N;i++){
        int x=1;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                x=0;
                break;
                }
            }
        if (x && i!=1){
            cnt+=i;
            if (min>i)
            min=i;
            }
        }
    if (cnt!=0)
    cout << cnt << "\n" << min;
    else
    cout << "-1";
    return 0;
    }