#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N, M;
    cin >> N >> M;
    vector<int> x, y;
    for (int i=0;i<M;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    for (int i=0;i<N;i++)
    y.push_back(0);
    for (int i=0;i<M;i++)
        {
        for (int j=0;j<N;j++)
            {
            int z;
            cin >> z;
            if (z==x[i])
            y[j]++;
            else
            y[x[i]-1]++;
            }
        }
    for (int i=0;i<N;i++)
    cout << y[i] << "\n";
    return 0;
    }