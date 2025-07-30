#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int> > v;
int main() {
    int N, cnt=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++){
        if (v[i].first>cnt)
            cnt=v[i].first+v[i].second;
        else
            cnt+=v[i].second;
    }
    cout << cnt;
    return 0;
}