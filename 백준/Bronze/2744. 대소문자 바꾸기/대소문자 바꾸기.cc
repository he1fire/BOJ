#include <iostream>
#include <string>
using namespace std;
int main () {
    string N;
    cin >> N;
    for (int i=0;i<N.size();i++)
        {
        if (N[i]<91)
        N[i]+=32;
        else
        N[i]-=32;
        }
    cout << N;
    return 0;
    }