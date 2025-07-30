#include <iostream>
using namespace std;
int main () {
    int N, ans=0, x[101]={0, };
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        if (x[a]==0)
        x[a]=1;
        else
        ans++;
        }
    cout << ans;
    return 0;
    }