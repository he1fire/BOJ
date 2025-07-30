#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    if (N>0 && M>0)
        cout << "1";
    if (N<0 && M>0)
        cout << "2";
    if (N<0 && M<0)
        cout << "3";
    if (N>0 && M<0)
        cout << "4";
    return 0;
}