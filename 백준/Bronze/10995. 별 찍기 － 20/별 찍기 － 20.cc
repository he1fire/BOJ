#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        M=i%2;
        if (M==1)
            {
            for (int j=1;j<=N;j++)
                {
                cout << "* ";
                }         
            cout << endl;
            }
        else 
            {
            for (int j=1;j<=N;j++)
                {
                cout << " *";
                }
            cout << endl;
            }
        }
    return 0;
    }