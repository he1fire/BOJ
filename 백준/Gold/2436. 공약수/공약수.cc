#include <iostream>
using namespace std;
int f(int a, int b) {
    return a ? f(b%a,a) : b;
}
int main () {
    int ans1=0, ans2=0, N, M;
    cin >> N >> M;
    M/=N;
    for (int i=1;i*i<=M;i++){
        if (M%i==0 && f(N*i,N*(M/i))==N){
            ans1=i;
            ans2=M/i;
        }
    }
    cout << N*ans1 << " " << N*ans2;
    return 0;
}