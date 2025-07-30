#include <iostream>
using namespace std;
int main () {
    int N, j=0;
    for(int i=1;i<=5;i++) 
        {
        cin >> N;
        if(N<=40)
            {
            N=40;
            }
        j+=N;
        }
    cout << j/5;
    return 0;
    }