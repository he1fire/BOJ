#include <iostream>
using namespace std;
int main () {
    int cnt=0, N[50]={0, };
    for (int i=0;i<10;i++){
        int a;
        cin >> a;
        N[a%42]++;
        }
    for (int i=0;i<42;i++){
        if (N[i])
        cnt++;
        }
    cout << cnt;
    return 0;
    }