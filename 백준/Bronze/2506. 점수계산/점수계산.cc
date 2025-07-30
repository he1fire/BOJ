#include <iostream>
using namespace std;
int main () {
    int N, x=0, y=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M;
        cin >> M;
        if (M==1)
            {
            x++;
            y+=x;
            }
        else
        x=0;
        }
    cout << y;
    return 0;
    }