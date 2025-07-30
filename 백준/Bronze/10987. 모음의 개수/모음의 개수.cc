#include <iostream>
using namespace std;
int main () {
    char N[101]={0, };
    int M=0;
    cin >> N;
    for (int i=0;N[i]!=0;i++)
        {
        if (N[i]=='a' || N[i]=='e' || N[i]=='i' || N[i]=='o' || N[i]=='u')
        M++;
        }
    cout << M;
    return 0;
    }