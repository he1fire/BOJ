#include <iostream>
#include <algorithm>
using namespace std;
int ch (int x) {
    if (x<0)
    return -x;
    else
    return x;
    }
int main () {
    int a, b, c, cnt=0, ans=987654321;
    cin >> a >> b >> c;
    cnt=ch(a-b);
    for (int i=0;i<c;i++) {
        int N;
        cin >> N;
        if (ch(N-b)<cnt)
        ans=min(ans,ch(N-b));
        }
    if (ans<cnt)
    cout << ans+1;
    else
    cout << cnt;
    return 0;
    }