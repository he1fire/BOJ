#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main () {
    string x[101];
    int N, M;
    cin >> N;
    for (int i=0;i<N;i++)
    cin >> x[i];
    cin >> M;
    if (M==1)
        {
        for (int i=0;i<N;i++)
        cout << x[i] << "\n";
        }
    else if (M==2)
        {
        for (int i=0;i<N;i++)
            {
            reverse(x[i].begin(),x[i].end());
            cout << x[i] << "\n";
            }
        }
    else
        {
        for (int i=N-1;i>=0;i--)
        cout << x[i] << "\n";
        }
    return 0;
    }