#include <iostream>
using namespace std;
int main () {
    int N, C=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        C+=B%A;
        }
    cout << C;
    return 0;
    }