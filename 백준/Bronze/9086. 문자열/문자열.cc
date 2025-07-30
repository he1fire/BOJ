#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char M[1001]={0, };
        int x=0;
        cin >> M;
        for (x=0;M[x]!=0;x++);
        cout << M[0] << M[x-1] << "\n";
        }
    return 0;
    }