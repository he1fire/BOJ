#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, M, ans=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<N;j++)
            {
            for (int k=0;k<N;k++)
                {
                if (i!=j && j!=k && k!=i)
                    {
                    int cnt=x[i]+x[j]+x[k];
                    if (cnt<=M)
                    ans=max(ans,cnt);
                    }
                }
            }
        }
    cout << ans;
    return 0;
    }