#include <iostream>
#include <string>
using namespace std;
int main () {
    int N, A=0, B=0;
    cin >> N;
    string x[14]={"sukhwan","baby","sukhwan","tururu","turu","very","cute","tururu","turu","in","bed","tururu","turu","baby"};
    A=N%14;
    B=N/14;
    if (A==3 || A==7 || A==11)
        {
        cout << "tu";
        if (B<3)
        for (int i=0;i<B+2;i++)
        cout << "ru";
        else
        cout << "+ru*" << B+2;
        }
    else if (A==4 || A==8 || A==12)
        {
        cout << "tu";
        if (B<4)
        for (int i=0;i<B+1;i++)
        cout << "ru";
        else
        cout << "+ru*" << B+1;
        }
    else
    cout << x[A];
    return 0;
    }