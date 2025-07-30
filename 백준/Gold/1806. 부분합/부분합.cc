#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 987654321
int main () {
    vector<int> x, sum;
    int N, M, ans=INF, L=0, R=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    sum.push_back(0);
    for (int i=0;i<N;i++)
    sum.push_back(sum[i]+x[i]);
    while (L<=N && R<=N)
        {
        if (sum[R]-sum[L]>=M)
            {
            ans=min(ans,R-L);
            R>L ? L++ : R++;
            }
        else
        R++;
        }
    ans==INF ? cout << "0" : cout << ans;
    return 0;
    }