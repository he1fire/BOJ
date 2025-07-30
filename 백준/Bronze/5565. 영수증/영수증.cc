#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=9;i++)
        {
        int M;
        cin >> M;
        N-=M;
        }
    cout << N;
    return 0;
    }