#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, M[4]={0, };
    M[1]=1;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x, y;
        cin >> x >> y;
        swap (M[x], M[y]);
        }
    for (int j=1;j<4;j++)
        {
        if (M[j]==1)
            {
            cout << j;
            break;
            }
        }
    return 0;
    }