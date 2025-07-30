#include <iostream>
using namespace std;
int main () {
    int a, b, c, ans=0;
    cin >> a >> b >> c;
    for (int i=1;i<=a;i++)
        ans+=b*i+c*i*i;
    cout << ans;
    return 0;
}