#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    string N;
    int cntU=0, cntC1=0, cntP=0, cntC2=0;
    getline (cin,N);
    for (int i=0;i<N.size();i++){
        if (N[i]=='U')
            cntU=1;
        if (cntU==1 && N[i]=='C')
            cntC1=1;
        if (cntC1==1 && N[i]=='P')
            cntP=1;
        if (cntP==1 && N[i]=='C')
            cntC2=1;
    }
    if (cntC2)
        cout << "I love UCPC";
    else
        cout << "I hate UCPC";
    return 0;
}