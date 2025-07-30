#include <iostream>
using namespace std;
int f(int x) {
    int y=0;
    for (int i=1;i<=x;i++)
    if (x%i==0)
    y++;
    if (y%2==0)
    return y/2;
    else
    return (y+1)/2;
    }
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
    M+=f(i);
    cout << M;
    return 0;
    }