#include <iostream>
using namespace std;
int main () {
    int N[105][105]={0, }, cnt=0;
    for (int i=0;i<4;i++){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        for (int j=a;j<x;j++){
            for (int k=b;k<y;k++)
            N[j][k]=1;
            }
        }
    for (int i=0;i<105;i++){
        for (int j=0;j<105;j++){
            if (N[i][j])
            cnt++;
            }
        }
    cout << cnt;
    return 0;
    }