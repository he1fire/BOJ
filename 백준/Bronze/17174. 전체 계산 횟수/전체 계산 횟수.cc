#include <iostream>
using namespace std;
int main() {
    int N, M, cnt=0;
    cin >> N >> M;
    while (N){
        cnt+=N;
        N/=M;
    }
    cout << cnt;
    return 0;
}