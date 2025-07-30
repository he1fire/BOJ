#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (1){
        int N;
        cin >> N;
        if (N==0)
            break;
        while (N>9){
            int M=N, cnt=0;
            while (M){
                cnt+=M%10;
                M/=10;
            }
            N=cnt;
        }
        cout << N << "\n";
    }
    return 0;
}