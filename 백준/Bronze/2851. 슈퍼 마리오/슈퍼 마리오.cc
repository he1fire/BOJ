#include <iostream>
using namespace std;
int main () {
    int N, ans=0, cnt=1;
    for (int i=1;i<=10;i++)
        {
        cin >> N;
        if (cnt==0)
        continue;
        else if (ans+N>=100)
            {
            ans+N-100<=100-ans ? cout << ans+N : cout << ans;
            cnt--;
            }
        else
        ans+=N;
        }
    if (cnt)
    cout << ans;
    return 0;
    }