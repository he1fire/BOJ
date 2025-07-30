#include <iostream>
using namespace std;
int main () {
    int N, cnt=0, ans=0;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int x;
        cin >> x;
        if (x==cnt)
            {
            cnt=(cnt+1)%3;
            ans++;
            }
        }
    cout << ans;
    return 0;
    }