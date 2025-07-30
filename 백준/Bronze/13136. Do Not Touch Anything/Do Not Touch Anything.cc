#include <iostream>
using namespace std;
int main (){
    long long N, M, T;
    cin >> N >> M >> T;
    printf("%lld", (N%T==0?N/T:N/T+1)*(M%T==0?M/T:M/T+1));
    return 0;
}