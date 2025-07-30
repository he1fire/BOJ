#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int cnt=0, ans=987654321;
        for (int j=0;j<7;j++)
            {
            int x;
            cin >> x;
            if (x%2==0)
                {
                cnt+=x;
                ans=min(ans,x);
                }
            }
        cout << cnt << " " << ans << "\n";
        }
    return 0;
    }