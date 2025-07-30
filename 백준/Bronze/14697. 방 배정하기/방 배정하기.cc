#include <iostream>
using namespace std;
int main () {
    int A, B, C ,N, ans=0;
    cin >> A >> B >> C >> N;
    for (int i=0;i*C<=N;i++)
        {
        for (int j=0;i*C+j*B<=N;j++)
            {
            if ((N-(i*C+j*B))%A==0)
                {
                ans=1;
                break;
                }
            if (ans)
            break;
            }
        if (ans)
        break;
        }
    cout << ans;
    return 0;
    }