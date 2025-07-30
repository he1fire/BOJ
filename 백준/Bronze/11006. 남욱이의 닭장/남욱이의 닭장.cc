#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B, C;
        cin >> A >> B;
        for (C=0;C+(B-C)*2!=A;C++);
        cout << C << " " << B-C << "\n";
        }
    return 0;
    }