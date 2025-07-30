#include <iostream>
using namespace std;
int main () {
    int M;
    cin >> M;
    char N[M], A=0, B=0;
    cin >> N;
    for (int i=0;i<M;i++)
        {
        if (N[i]=='A')
        A++;
        else
        B++;
        }
    if (A>B)
    cout << "A";
    else if (B>A)
    cout << "B";
    else
    cout << "Tie";
    return 0;
    }