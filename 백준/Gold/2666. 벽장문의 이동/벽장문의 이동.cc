#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int N, A, B, M, x[20], ans=987654321;
    cin >> N >> A >> B >> M;
    for (int i=0;i<M;i++)
    cin >> x[i];
    for (int i=0;i<(1<<M);i++)
        {
        int cnt=0;
        int a=A, b=B;
        for (int j=0;j<M;j++)
            {
            if ((i&(1<<j))==0)
                {
                int add=a-x[j];
                if (add<0)
                add=-add;
                cnt+=add;
                a=x[j];
                }
            else
                {
                int add=b-x[j];
                if (add<0)
                add=-add;
                cnt+=add;
                b=x[j];
                }
            }
        ans=min(ans,cnt);
        }
    cout << ans;
    return 0;
    }