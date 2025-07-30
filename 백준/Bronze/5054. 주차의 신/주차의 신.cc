#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int M, min=987654321, max=0;
        cin >> M;
        for (int j=0;j<M;j++)
            {
            int a;
            cin >> a;
            if (a>max)
            max=a;
            if (a<min)
            min=a;
            }
        cout << 2*(max-min) << "\n";
        }
    return 0;
    }