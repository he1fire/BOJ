#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    vector<pair<pair<int, int >, int> > x;
    vector<pair<int, int> > y;
    int N, K;
    cin >> N >> K;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        x.push_back(make_pair(make_pair(a, b),i+1));
    }
    sort(x.rbegin(),x.rend());
    for (int i=0;i<K;i++){
        y.push_back(make_pair(x[i].first.second, x[i].second));
    }
    sort(y.rbegin(),y.rend());
    cout << y[0].second;
    return 0;
}