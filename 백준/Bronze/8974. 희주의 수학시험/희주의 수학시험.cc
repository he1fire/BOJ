#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int A, B, N=0;
    for (int i=1;i<=50;i++)
        {
        for (int j=1;j<=i;j++)
        x.push_back(i);
        }
    cin >> A >> B;
    for (int i=A-1;i<=B-1;i++)
    N+=x[i];
    cout << N;
    return 0;
    }