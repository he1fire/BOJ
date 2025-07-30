#include <iostream>
using namespace std;
int main () {
    int N, ans=0;
    cin >> N;
    for (int i=1;N>0;i++, ans++)
        {
        if (N>=i)
        N-=i;
        else if (N<i)
            {
            i=1;
            N-=i;
            }
        }
    cout << ans;
    return 0;
    }