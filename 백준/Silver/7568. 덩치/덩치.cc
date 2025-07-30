#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N;
    cin >> N;
    vector<int> x(N,0), y(N,0), z(N,1);
    for (int i=0;i<N;i++)
    cin >> x[i] >> y[i];
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<N;j++)
            {
            if (x[i]<x[j] && y[i]<y[j])
            z[i]++;
            }
        }
    for (int i=0;i<N;i++)
    cout << z[i] << " ";
    return 0;
    }