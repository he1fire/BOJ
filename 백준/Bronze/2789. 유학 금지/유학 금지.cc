#include <iostream>
#include <string>
using namespace std;
int f(char x) {
    if (x=='A' || x=='B' || x=='C' || x=='D' || x=='E' || x=='G' || x=='I' || x=='M' || x=='R')
    return 0;
    else
    return 1;
    }
int main () {
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
        {
        if (f(N[i]))
        cout << N[i];
        }
    return 0;
    }