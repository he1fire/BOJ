#include <iostream>
using namespace std;
int f (int x,int y) {
    return x ? f(y%x,x) : y;
    }
int main () {
    int N, M;
    cin >> N >> M;
    if (N<0)
    N*=-1;
    if (M<0)
    M*=-1;
    if (N==0 && M==0)
    cout << "0";
    else if (N>0 && M>0)
    f(N,M)==1 ? cout << "1" : cout << "2";
    else if ((N==0 && M>1) || (N>1 && M==0))
    cout << "2";
    else
    cout << "1";
    return 0;
    }