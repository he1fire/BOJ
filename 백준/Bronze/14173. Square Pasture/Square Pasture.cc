#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int x[4]={0}, y[4]={0}, X, Y;
    for (int i=0;i<4;i++)
        cin >> x[i] >> y[i];
    X=max((min(x[0],x[2])-max(x[1],x[3])),(max(x[1],x[3])-min(x[0],x[2])));
    Y=max((min(y[0],y[2])-max(y[1],y[3])),(max(y[1],y[3])-min(y[0],y[2])));
    cout << max(X*X,Y*Y);
    return 0;
}