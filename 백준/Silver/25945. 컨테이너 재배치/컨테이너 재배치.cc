#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans[2], cnt, chk;
vector<ll> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0, a;i<N;i++){
        cin >> a;
        v.push_back(a);
        cnt+=a;
    }
    sort(v.begin(),v.end());
    chk=cnt/N;
    for (ll i=0;i<N;i++){
        if (v[i]>chk+1)
            ans[0]+=v[i]-(chk+1);
        else if (v[i]<chk)
            ans[1]+=chk-v[i];
    }
    cout << max(ans[0],ans[1]);
    return 0;
}