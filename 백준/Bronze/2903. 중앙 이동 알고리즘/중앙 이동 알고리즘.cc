#include <iostream>
using namespace std;
int main () {
    long long N, cnt=2;
    cin >> N;
    for (int i=0;i<N;i++)
        cnt=(cnt*2-1);
    cout << cnt*cnt;
    return 0;
}