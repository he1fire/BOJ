#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        cout << (A*A)/(B*B) << "\n";
        }
    return 0;
    }