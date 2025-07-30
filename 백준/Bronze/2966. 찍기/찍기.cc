#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    int N, X=0, Y=0, Z=0;
    string M;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        if (i%3==0 && M[i]=='A')
        X++;
        else if (i%3==1 && M[i]=='B')
        X++;
        else if (i%3==2 && M[i]=='C')
        X++;
        if (i%2==0 && M[i]=='B')
        Y++;
        else if (i%4==1 && M[i]=='A')
        Y++;
        else if (i%4==3 && M[i]=='C')
        Y++;
        if ((i%6==0 || i%6==1) && M[i]=='C')
        Z++;
        else if ((i%6==2 || i%6==3) && M[i]=='A')
        Z++;
        else if ((i%6==4 || i%6==5) && M[i]=='B')
        Z++;
        }
    cout << max(X,max(Y,Z)) << "\n";
    if (X>=Y && X>=Z)
    cout << "Adrian\n";
    if (Y>=Z && Y>=X)
    cout << "Bruno\n";
    if (Z>=X && Z>=Y)
    cout << "Goran\n";
    return 0;
    }