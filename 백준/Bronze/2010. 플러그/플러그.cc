#include <iostream>
using namespace std;
int main () {
    int N, j, k=0;
    cin >> N;
    for(int i=1;i<=N;i++)
        {
        cin >> j;
        k+=j;
        }
    cout << k-N+1;
    return 0;
    }