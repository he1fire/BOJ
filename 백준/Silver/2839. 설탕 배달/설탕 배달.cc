#include <iostream>
using namespace std;
int main () {
    int N, A=0, B=0;
    cin >> N;
    for (int i=N;i>=3;i-=3)
        {
        if (i==4 || i==7)
            {
            A=-1;
            break;
            }
        if (i%5==0)
            {
            B=i/5;
            break;
            }
        A+=1;
        }
    cout << A+B;
    return 0;
    }