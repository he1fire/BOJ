#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, K, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> K;
    for (int i=0, a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=0, a, b;i<M;i++){
        cin >> a >> b;
        auto x=lower_bound(v.begin(),v.end(),a-(K-b));
        if (b<=K && x!=v.end()){
            if (abs(*x-a)+b<=K)
                ans++;
        }
    }
    cout << ans;
    return 0;
}