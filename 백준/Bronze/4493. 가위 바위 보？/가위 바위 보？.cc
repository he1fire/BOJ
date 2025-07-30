#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x=0, y=0;
        char A, B;
        cin >> M;
        for (int j=1;j<=M;j++)
            {
            cin >> A >> B;
            if ((A=='R' && B=='S') || (A=='S' && B=='P') || (A=='P' && B=='R'))
            x++;
            else if ((B=='R' && A=='S') || (B=='S' && A=='P') || (B=='P' && A=='R'))
            y++;
            }
        if (x>y)
        cout << "Player 1\n";
        else if (y>x)
        cout << "Player 2\n";
        else
        cout << "TIE\n";
        }
    return 0;
    }