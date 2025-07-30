#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A;
        cin >> A;
        int B, C=0;
        for (int i=1;i<=A;i++)
            {
            cin >> B;
            C+=B;
            }
        cout << C << "\n";
        }
    return 0;
    }