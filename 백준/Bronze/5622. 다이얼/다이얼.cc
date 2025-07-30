#include <iostream>
#include <string>
using namespace std;
int f(char x) {
    if (x<=79)
    return (x-59)/3;
    else if (x<=83)
    return 7;
    else if (x<=86)
    return 8;
    else
    return 9;
    }
int main () {
    string N;
    int M=0;
    cin >> N;
    for (int i=0;i<N.size();i++)
    M+=f(N[i])+1;
    cout << M;
    return 0;
    }