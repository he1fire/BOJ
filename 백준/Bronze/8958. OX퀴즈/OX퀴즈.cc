#include <iostream>
using namespace std;
int main () {
    int N, x, y;
    char M[81];
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        cin >> M;
        x=0;
        y=0;
        for (int j=0;j<=81;j++)
            {
            if (M[j]=='O')
                {
                x++;
                y+=x;
                }
            else if (M[j]=='X')
            x=0;
            else
            break;
            }
        cout << y << "\n";
        }
    return 0;
    }