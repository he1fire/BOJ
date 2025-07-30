#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, ans=0;
        cin >> a;
        for (int j=1;j<a;j++)
            {
            if ((j*j+j)<=a)
            ans++;
            }
        cout << ans << "\n";
        }
    return 0;
    }