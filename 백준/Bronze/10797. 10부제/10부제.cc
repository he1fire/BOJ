#include <iostream>
using namespace std;
int main () {
    int N, k=0;
    cin >> N;
    for(int i=1;i<=5;i++)
        {
        int j;
        cin >> j;
        if(N==j)
            {
            k+=1;
            }
        }
    cout << k;
    return 0;
    }