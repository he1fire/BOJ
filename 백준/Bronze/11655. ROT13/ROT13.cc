#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main () {
    string N;
    getline (cin,N);
    for (int i=0;i<N.size();i++){
        int x=N[i];
        if (64<N[i] && N[i]<91){
            x-=13;
            if (x<65)
                x+=26;
        }
        if (96<N[i] && N[i]<123){
            x-=13;
            if (x<97)
                x+=26;
        }
        cout << char(x);
    }
    return 0;
}