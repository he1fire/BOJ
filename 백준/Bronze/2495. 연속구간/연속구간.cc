#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main () {
    for (int i=0;i<3;i++)
        {
        int ans=1, cnt=1;
        string x;
        cin >> x;
        for (int j=1;j<8;j++)
            {
            if (x[j]==x[j-1])
            cnt++;
            else
            cnt=1;
            ans=max(ans,cnt);
            }
        cout << ans << "\n";
        }
    return 0;
    }