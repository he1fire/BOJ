#include <iostream>
using namespace std;
int main () {
    int N, cnt=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        if (N%i==0)
        cnt+=i;
        }
    cout << 5*cnt-24;
    return 0;
    }