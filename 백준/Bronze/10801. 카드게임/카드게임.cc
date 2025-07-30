#include <iostream>
using namespace std;
int main () {
    int x[15]={0, }, y[15]={0, }, wx=0, wy=0;
    for (int i=0;i<10;i++)
        cin >> x[i];
    for (int i=0;i<10;i++)
        cin >> y[i];
    for (int i=0;i<10;i++){
        if (x[i]>y[i])
            wx++;
        else if (x[i]<y[i])
            wy++;
        }
    if (wx>wy)
        cout << "A";
    else if (wx<wy)
        cout << "B";
    else
        cout << "D";
    return 0;
    }