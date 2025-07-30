#include <iostream>
using namespace std;
int main () {
    int N, x=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        x+=A*B;
        }
    cout << x;
    return 0;
    }