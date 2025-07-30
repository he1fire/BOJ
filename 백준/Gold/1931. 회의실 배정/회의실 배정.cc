#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    int N, cnt=0, M=0;
    vector<pair<int, int> > x;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(b,a));
        }
    sort (x.begin(),x.end());
    for (int i=0;i<N;i++)
        {
        if (x[i].second>=M)
            {
            cnt++;
            M=x[i].first;
            }
        }
    cout << cnt;
    return 0;
    }