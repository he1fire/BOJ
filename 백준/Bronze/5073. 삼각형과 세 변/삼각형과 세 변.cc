#include <iostream>
using namespace std;
int main () {
    while (1)
        {
        int A, B, C;
        cin >> A >> B >> C;
        if (A==B && B==C && A==0)
        break;
        else
            {
            if (A>=B+C || B>=A+C || C>=B+A)
            cout << "Invalid\n";
            else if(A==B && B==C)
            cout << "Equilateral\n";
            else if(C==B || C==A || B==A)
            cout << "Isosceles\n";
            else
            cout << "Scalene\n";
            }
        }
    return 0;
    }