#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int x;
        cin >> x;
        for (int j=1;j<=x;j++)
            {
            for (int k=1;k<=x;k++)
                {
                if (j==1 || j==x || k==1 || k==x)
                cout << "#";
                else
                cout << "J";
                }
            cout << "\n";
            }
        cout << "\n";
        }
    return 0;
    }