#include <iostream>
using namespace std;
int main () {
    int N, ans=0;
    cin >> N;
    for (int i=0;i<5;i++)
        {
        int x;
        cin >> x;
        if (N==x)
        ans++;
        }
    cout << ans;
    return 0;
    }