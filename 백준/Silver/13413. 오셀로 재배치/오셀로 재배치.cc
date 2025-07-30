#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x=0, y=0;
        char A[100001], B[100001];
        cin >> M >> A >> B;
        for (int j=0;j<M;j++)
            {
            if (A[j]=='W' && B[j]=='B')
            x++;
            if (A[j]=='B' && B[j]=='W')
            y++;
            }
        if (x>=y)
        cout << x << "\n";
        else
        cout << y << "\n";
        }
    return 0;
    }