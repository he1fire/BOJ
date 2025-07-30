#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, ans1=0, ans2=0;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int x[5], cnt=0;
        for (int j=0;j<5;j++)
        cin >> x[j];
        for (int j=0;j<5;j++)
            {
            for (int k=0;k<5;k++)
                {
                for (int l=0;l<5;l++)
                    {
                    if (j!=k && k!=l && l!=j)
                        {
                        int a=x[j]+x[k]+x[l];
                        a%=10;
                        cnt=max(a,cnt);
                        }
                    }
                }
            }
        if (cnt>=ans2)
            {
            ans1=i;
            ans2=cnt;
            }
        }
    cout << ans1;
    return 0;
    }