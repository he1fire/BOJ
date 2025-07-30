#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        if (A%B==0)
        cout << A/B << "\n";
        else
        cout << A/B+1 << "\n";
        }
    return 0;
    }