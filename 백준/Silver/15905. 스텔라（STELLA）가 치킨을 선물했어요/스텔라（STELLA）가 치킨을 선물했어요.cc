#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, cnt=0;
    vector<pair<int, int> > x;
    cin >> N;
    for (int i=1;i<=N;i++)
        {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(a,b));
        }
    sort (x.rbegin(),x.rend());
    for (int i=5;i<x.size();i++)
        {
        if (x[4].first==x[i].first)
        cnt++;
        }
    cout << cnt;
    return 0;
    }