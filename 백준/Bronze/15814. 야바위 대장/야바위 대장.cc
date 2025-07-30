#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    string x;
    int N;
    cin >> x >> N;
    for (int i=1;i<=N;i++)
        {
        int A, B;
        cin >> A >> B;
        swap(x[A],x[B]);
        }
    cout << x;
    return 0;
    }