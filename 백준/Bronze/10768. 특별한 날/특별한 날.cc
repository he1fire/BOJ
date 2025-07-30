#include <iostream>
using namespace std;
int main () {
    int N, M;
    cin >> N >> M;
    if (N>2)
    cout << "After";
    else if (N<2)
    cout << "Before";
    else
        {
        if (M>18)
        cout << "After";
        else if (M<18)
        cout << "Before";
        else
        cout << "Special";
        }
    return 0;
    }