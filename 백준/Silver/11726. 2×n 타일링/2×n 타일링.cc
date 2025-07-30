#include <iostream>
using namespace std;
int main () {
    int N, x[1001];
    x[1]=1;
    x[2]=2;
    cin >> N;
    for (int i=3;i<=N;i++)
    x[i]=(x[i-1]+x[i-2])%10007;
    cout << x[N];
    return 0;
    }