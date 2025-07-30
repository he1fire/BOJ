#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, cnt=0, ma=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        cnt+=a;
        ma=max(ma,a);
    }
    cout << cnt-ma;
    return 0;
}