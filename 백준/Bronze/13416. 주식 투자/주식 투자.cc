#include <iostream>
using namespace std;
int main () {
    long long N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        long long M, x=0;
        cin >> M;
        for (int j=1;j<=M;j++)
            {
            int A, B, C;
            cin >> A >> B >> C;
            if (A<0 && B<0 && C<0);
            else
            x+=max(A,max(B,C));
            }
        cout << x << "\n";
        }
    return 0;
    }