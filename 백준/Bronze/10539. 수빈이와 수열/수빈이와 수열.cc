#include <iostream>
#include <vector>
using namespace std;
int main () {
    int N, M=0;
    vector<int> x, y;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        y.push_back(a*(i+1)-M);
        M+=y[i];
        }
    for (int i=0;i<N;i++)
    cout << y[i] << " ";
    return 0;
    }