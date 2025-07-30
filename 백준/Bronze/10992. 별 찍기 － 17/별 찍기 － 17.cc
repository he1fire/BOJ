#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        for (int j=N-i;j>=1;j--)
            {
            cout << " ";
            }
        cout << "*";
        for (int k=2*i-3;k>=1;k--)
            {
            M+=1;
            if (k==2*N-3)
                {
                for (int l=2*N-3;l>=1;l--)
                    {
                    cout << "*";
                    }
                break;
                }
            else
                {
                cout << " ";
                }  
            }
        if (M==0)
            {
            cout << endl;
            }
        else
            {
            cout << "*" << endl;
            }
        }
    return 0;
    }