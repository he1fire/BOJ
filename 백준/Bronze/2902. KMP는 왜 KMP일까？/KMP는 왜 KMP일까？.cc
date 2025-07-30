#include <iostream>
using namespace std;
int main () {
    char N[101]={0, };
    cin >> N;
    for (int i=0;N[i]!=0;i++)
        {
        if (N[i]<=90 && N[i]>=65)
        cout << N[i];
        }
    return 0;
    }