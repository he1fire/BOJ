#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, x[11]={0, }, ans=0;
    cin >> N;
    if (N==0)
        {
        cout << "1";
        return 0;
        }
    while (N)
        {
        x[N%10]++;
        N/=10;
        }
    x[10]=(x[6]+x[9]+1)/2;
    x[6]=0;
    x[9]=0;
    for (int i=0;i<11;i++)
    ans=max(ans,x[i]);
    cout << ans;
    return 0;
    }