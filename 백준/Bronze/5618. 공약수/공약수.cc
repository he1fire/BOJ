#include <iostream>
using namespace std;
int f(int a, int b) {
    return a ? f(b%a,a) : b;
    }
int main () {
    int N, ans=0;
    cin >> N;
    if (N==2)
        {
        int A, B;
        cin >> A >> B;
        ans=f(A,B);
        }
    else
        {
        int A, B, C;
        cin >> A >> B >> C;
        ans=f(f(A,B),C);
        }
    for (int j=1;j<=ans;j++)
    if (ans%j==0)
    cout << j << "\n";
    return 0;
    }