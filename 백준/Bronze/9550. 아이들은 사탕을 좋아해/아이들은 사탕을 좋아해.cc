#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B, x=0;
        cin >> A >> B;
        for (int j=1;j<=A;j++)
            {
            int C;
            cin >> C;
            x+=C/B;
            }
        cout << x << "\n";
        }
    return 0;
    }