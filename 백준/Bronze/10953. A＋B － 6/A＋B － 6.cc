#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char M[4];
        cin >> M;
        cout << M[0]+M[2]-96 << "\n";
        }
    return 0;
    }