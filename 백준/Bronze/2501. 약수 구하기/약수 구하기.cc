#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, M;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        {
        if (N%i==0)
        x.push_back(i);
        }
    M>x.size() ? cout << "0" : cout << x[M-1];
    return 0;
    }