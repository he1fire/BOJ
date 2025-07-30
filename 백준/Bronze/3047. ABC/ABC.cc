#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N[3];
    char M[4]={0, };
    for (int i=0;i<3;i++)
    cin >> N[i];
    sort (N, N+3);
    cin >> M;
    for (int j=0;j<3;j++)
        {
        if (M[j]=='A')
        cout << N[0] << " ";
        else if (M[j]=='B')
        cout << N[1] << " ";
        else
        cout << N[2] << " ";
        }
    return 0;
    }