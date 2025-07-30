#include <iostream>
using namespace std;
int main () {
    int N, M=0;
    for (int i=1;i<=8;i++)
        {
        cin >> N;
        M=M*10+N;
        }
    if (M==12345678)
    cout << "ascending";
    else if (M==87654321)
    cout << "descending";
    else
    cout << "mixed";
    return 0;
    }