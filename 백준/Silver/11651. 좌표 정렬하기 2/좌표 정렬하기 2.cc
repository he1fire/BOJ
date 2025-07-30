#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<pair<int,int> > x; 
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        {
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(b,a));
        }
    sort(x.begin(),x.end());
    for (int i=0;i<N;i++)
    cout << x[i].second << " " << x[i].first << "\n";
    return 0;
    }