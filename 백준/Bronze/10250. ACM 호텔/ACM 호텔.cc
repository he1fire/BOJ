#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B, C;
        cin >> A >> B >> C;
        if (C%A!=0)
        cout << (C%A*100)+(C/A+1) << "\n";
        else
        cout << (A*100)+(C/A) << "\n";
        }
    return 0;
    }