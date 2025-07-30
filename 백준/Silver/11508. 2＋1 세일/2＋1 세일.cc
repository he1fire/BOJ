#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, cnt=0;
    cin >> N;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<N;i++){
        if (i%3!=2)
            cnt+=v[i];
    }
    cout << cnt;
    return 0;
}