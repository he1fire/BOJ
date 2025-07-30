#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, M;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
    x.push_back(i);
    for (int i=0;i<M;i++)
        {
        int a, b;
        cin >> a >> b;
        swap (x[a-1],x[b-1]);
        }
    for (int i=0;i<N;i++)
    cout << x[i] << " ";
    return 0;
    }