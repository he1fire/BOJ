#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int M, x;
        cin >> x >> M;
        for (int j=1;j<=M;j++)
            {
            int a, b;
            cin >> a >> b;
            x+=a*b;
            }
        cout << x << "\n";
        }
    return 0;
    }