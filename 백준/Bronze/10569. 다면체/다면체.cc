#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for(int i=1;i<=N;i++)
        {
        int V, E;
        cin >> V >> E;
        cout << E-V+2 << "\n";
        }
    return 0;
    }