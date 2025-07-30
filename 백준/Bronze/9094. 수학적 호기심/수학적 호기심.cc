#include <iostream>
using namespace std;
int main () {
    int x;
    cin >> x;
    for (int i=0;i<x;i++)
        {
        int N, M, ans=0;
        cin >> N >> M;
        for (int j=1;j<N;j++)
            {
            for (int k=j+1;k<N;k++)
                {
                if ((j*j+k*k+M)%(j*k)==0)
                ans++;
                }
            }
        cout << ans << "\n";
        }
    return 0;
    }