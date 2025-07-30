#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    vector<int> y;
    int N, M;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
    x.push_back(i);
    for (int i=0;i<M;i++)
    y.push_back(1);
    for (int i=0;i<N-M;i++)
    y.push_back(0);
    do
        {
        for (int i=0;i<N;i++)
            {
            if (y[i]==1)
            cout << x[i] << " ";
            }
        cout << "\n";
        }
    while(prev_permutation(y.begin(),y.end()));
    return 0;
    }