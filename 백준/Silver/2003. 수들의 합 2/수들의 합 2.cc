#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> x;
    int N, M, cnt=0, L=0, R=0;
    cin >> N >> M;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    while (L<=N-1 && R<=N-1)
        {
        int sum=0;
        for (int i=L;i<=R;i++)
        sum+=x[i];
        if (sum>M && R>L)
        L++;
        else if (sum==M)
            {
            cnt++;
            R++;
            }
        else
        R++;
        }
    cout << cnt;
    return 0;
    }