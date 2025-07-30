#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char x[51]={0, }, y[51]={0,};
        cin >> x;
        for (int j=0;x[j]!=0;j++)
            {
            y[j]=x[j]+1;
            if (y[j]==91)
            y[j]=65;
            }
        cout << "String #" << i << "\n";
        for (int k=0;y[k]!=0;k++)
        cout << y[k];
        if (i!=N)
        cout << "\n\n";
        }
    return 0;
    }