#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, mx=0, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    for (int i=0;i<N;i++)
        mx=max(mx,v[i]+i+1);
    for (int i=0;i<N;i++){
        if (v[i]+N>=mx)
            ans++;
    }
    cout << ans;
    return 0;
}