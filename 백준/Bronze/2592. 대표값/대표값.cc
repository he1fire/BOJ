#include <iostream>
using namespace std;
int main () {
    int ans1=0, ans2=0, x[1001]={0, }, cnt=0;
    for (int i=0;i<10;i++)
        {
        int a;
        cin >> a;
        ans1+=a;
        x[a]++;
        }
    for (int i=0;i<1001;i++)
        {
        if (x[i]>cnt)
            {
            cnt=x[i];
            ans2=i;
            }
        }
    cout << ans1/10 << "\n" << ans2;
    return 0;
    }