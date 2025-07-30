#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int main () {
    int N, ans=0, cnt=0;
    vector<int> x;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a;
        cin >> a;
        x.push_back(a);
        }
    for (int i=1;i<N;i++)
        {
        if (x[i]>x[i-1])
            {
            cnt+=x[i]-x[i-1];
            ans=max(cnt,ans);
            }
        else
        cnt=0;
        }
    cout << ans;
    return 0;
    }