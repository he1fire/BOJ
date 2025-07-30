#include <iostream>
using namespace std;
int main () {
    int N, M;
    cin >> N >> M;
    for (int i=1;i<=N;i++)
        {
        int j;
        cin >> j;
        if (j<M)
            {
            cout << j << " ";
            }
        }
    return 0;
    }