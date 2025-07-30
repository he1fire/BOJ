#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int x[1000001], N;
    x[1]=0;
    cin >> N;
    for (int i=2;i<=N;i++)
        {
        x[i]=x[i-1];
        if (i%2==0)
        x[i]=min(x[i],x[i/2]);
        if (i%3==0)
        x[i]=min(x[i],x[i/3]);
        x[i]++;
        }
    cout << x[N];
    return 0;
    }