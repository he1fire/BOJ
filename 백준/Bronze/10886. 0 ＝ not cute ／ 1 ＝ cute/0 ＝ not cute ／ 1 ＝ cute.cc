#include <iostream>
using namespace std;
int main () {
    int N, A=0, B=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int j;
        cin >> j;
        if (j==0)
            {
            A+=1;
            }
        else 
            {
            B+=1;
            }
        }
    if (A>B)
        {
        cout << "Junhee is not cute!";
        }
    else
        {
        cout << "Junhee is cute!";
        }
    return 0;
    }