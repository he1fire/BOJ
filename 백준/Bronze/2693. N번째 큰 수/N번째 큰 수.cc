#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A[10];
        for (int j=0;j<10;j++)
        cin >> A[j];
        sort (A,A+10);
        cout << A[7] << "\n";
        }
    return 0;
    }