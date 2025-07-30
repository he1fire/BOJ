#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    while (1){
        string N;
        getline (cin,N);
        if (N=="END")
            break;
        reverse(N.begin(),N.end());
        cout << N << "\n";
        }
    return 0;
    }