#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> arr[505], ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr[b].push_back(a);
    }
    for (int i=1;i<=N;i++){
        if (arr[i].empty())
            ans.push_back(i);
    }
    cout << ans.size() << "\n";
    for (auto x:ans)
        cout << x << "\n";
    return 0;
}