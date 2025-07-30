#include <iostream>
using namespace std;
char N[101];
int main () {
    cin >> N;
    for (int i=0;N[i]!=0;i++)
        {
        cout << N[i];
        if (i%10==9)
        cout << "\n";
        }
    return 0;
    }