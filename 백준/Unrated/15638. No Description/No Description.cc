#include <iostream>
using namespace std;
bool f(int x) {
    for (int i=2;i*i<=x;i++){
    if (x%i==0)
        return 0;
    }
    return 1;
    }
int main () {
    int N;
    cin >> N;
    if (f(N))
        cout << "Yes";
    else
        cout << "No";
    return 0;
    }