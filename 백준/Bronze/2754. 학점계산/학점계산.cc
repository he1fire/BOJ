#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    char N[2]={0, };
    double M=0;
    cin >> N;
    if (N[0]=='A')
    M+=4;
    else if (N[0]=='B')
    M+=3;
    else if (N[0]=='C')
    M+=2;
    else if (N[0]=='D')
    M+=1;
    else
    M+=0;
    if (N[1]=='+')
    M+=0.3;
    else if (N[1]=='0')
    M+=0;
    else if (N[1]=='-')
    M-=0.3;
    else
    M+=0;
    printf ("%.1f", M);
    return 0;
    }