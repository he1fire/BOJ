#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        char A[21]={0, }, B[21]={0, };
        cin >> A >> B;
        cout << "Distances: ";
        for (int j=0;A[j]!=0;j++)
            {
            if (A[j]<=B[j])
            cout << B[j]-A[j] << " ";
            else
            cout << B[j]-A[j]+26 << " ";
            }
        cout << "\n";
        }
    return 0;
    }