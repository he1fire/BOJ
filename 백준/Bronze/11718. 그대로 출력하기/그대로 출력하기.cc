#include <iostream>
#include <string>
using namespace std;
int main () {
    while (1){
        string N;
        getline (cin,N);
        if (N=="")
            break;
        cout << N << "\n";
        }
    return 0;
    }