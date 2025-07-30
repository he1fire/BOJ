#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, M, x=0;
    cin >> N >> M;
    x=M;
    for (int i=1;i<=N;i++)
        {
        int a, b;
        cin >> a >> b;
        M=M+a-b;
        if (M<0)
        break;
        x=max(x,M);
        }
    M>=0 ? cout << x : cout << "0";
    return 0;
    }