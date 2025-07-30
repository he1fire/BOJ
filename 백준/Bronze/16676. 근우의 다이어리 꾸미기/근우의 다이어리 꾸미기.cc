#include <iostream>
using namespace std;
int main () {
    int N, ans=0, cnt=1;
    cin >> N;
    while (!(N<cnt)){
        ans++;
        cnt*=10;
        cnt++;
    }
    N!=0 ? cout << ans : cout << "1";
    return 0;
}