#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    vector<pair<int,int> > x;
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(a,b));
        }
    sort (x.begin(),x.end());
    for (int i=0;i<N;i++)
    cout << x[i].first << " " << x[i].second << "\n";
    return 0;
    }