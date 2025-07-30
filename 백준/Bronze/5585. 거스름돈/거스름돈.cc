#include <iostream>
using namespace std;
int main () {
    int N, ans=0, m=500, n=0;
    cin >> N;
    n=1000-N;
    for (int i=0;i<6;i++)
        {
        ans+=n/m;
        n%=m;
        i%2 ? m/=2 : m/=5;
        }
    cout << ans;
    return 0;
    }