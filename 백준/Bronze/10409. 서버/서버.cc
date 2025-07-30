#include <iostream>
using namespace std;
int main () {
    int N , M, ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        M-=a;
        if (M>=0)
        ans++;
        }
    cout << ans;
    return 0;
    }