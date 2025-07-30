#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<int> x;
    int N, M=0, A=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int y;
        cin >> y;
        x.push_back(y);
        }
    sort(x.begin(),x.end());
    for (int i=0;i<N;i++)
        {
        A+=x[i];
        M+=A;
        }
    cout << M;
    return 0;
    }