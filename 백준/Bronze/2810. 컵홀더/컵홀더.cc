#include <iostream>
using namespace std;
int main () {
    int N, s=0, l=0;
    string x;
    cin >> N >> x;
    for (int i=0;i<N;i++)
        {
        if (x[i]=='S')
        s++;
        else if (x[i]=='L')
        l++;
        }
    N>(s+(l/2)+1) ? cout << s+(l/2)+1 : cout << N;
    return 0;
    }