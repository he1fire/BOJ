#include <iostream>
#include <string>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int x;
        string y;
        cin >> x >> y;
        for (int j=0;j<y.size();j++)
            {
            if (j==x-1)
            continue;
            else
            cout << y[j];
            }
        cout << "\n";
        }
    return 0;
    }