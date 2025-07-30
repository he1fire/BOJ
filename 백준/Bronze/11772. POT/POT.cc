#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x, y=1;
        cin >> x;
        for (int j=1;j<=(x%10);j++)
        y*=x/10;
        M+=y;
        }
    cout << M;
    return 0;
    }