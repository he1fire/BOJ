#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N[8], M[8];
    for (int i=0;i<8;i++)
        {
        cin >> N[i];
        M[i]=N[i];
        }
    sort(N,N+8,greater<int>());
    cout << N[0]+N[1]+N[2]+N[3]+N[4] << "\n";
    for (int i=0;i<8;i++)
    if(M[i]==N[0] || M[i]==N[1] || M[i]==N[2] || M[i]==N[3] || M[i]==N[4])
    cout << i+1 << " ";
    return 0;
    }