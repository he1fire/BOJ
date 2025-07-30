#include <iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int a, b, c, cnt=0;
        char x, y;
        cin >> a >> x >> b >> y >> c;
        if (x=='+' && a+b==c)
        cnt++;
        else if (x=='-' && a-b==c)
        cnt++;
        cout << "Case " << i << ": ";
        cnt==1 ? cout << "YES\n" : cout << "NO\n";
        }
    return 0;
    }