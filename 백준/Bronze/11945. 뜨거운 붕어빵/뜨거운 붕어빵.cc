#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
    int M, N;
    cin >> M >> N;
    for (int i=1;i<=M;i++)
        {
        string x;
        cin >> x;
        reverse(x.begin(),x.end());
        cout << x << "\n";
        }
    return 0;
    }