#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int N, M, ans=-1;
    cin >> N >> M;
    vector<int> x(N+1,0);
    x[1]=3;
    vector<pair<int, int> > y;
    for (int i=0;i<M;i++)
        {
        int a, b;
        cin >> a >> b;
        y.push_back(make_pair(a,b));
        }
    sort (y.begin(),y.end());
    for (int i=0;i<M;i++)
        {
        if (x[y[i].first]>x[y[i].second])
        x[y[i].second]=x[y[i].first]-1;
        if (x[y[i].second]>x[y[i].first])
        x[y[i].first]=x[y[i].second]-1;
        }
    for (int i=0;i<x.size();i++)
    if (x[i])
    ans++;
    cout << ans;
    return 0;
    }