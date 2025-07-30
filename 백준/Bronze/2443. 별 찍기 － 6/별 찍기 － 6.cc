#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=N;i>=1;i--)
        {
        for (int j=N-i;j>=1;j--)
            {
            cout << " ";
            }
        for (int k=2*i-1;k>=1;k--)
            {
            cout << "*";
            }
        cout << endl;
        }
    return 0;
    }