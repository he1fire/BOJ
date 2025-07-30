#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    cin >> N;
    for(int i=1;i<=N;i++)
        {
        if (i%125==0)
        M+=3;
        else if (i%25==0)
        M+=2;
        else if (i%5==0)
        M+=1;
        }
    cout << M;
    return 0;
    }