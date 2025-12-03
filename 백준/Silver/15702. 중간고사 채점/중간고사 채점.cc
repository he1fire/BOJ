#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll idx, cnt;
    bool operator<(st& tmp){
        if (cnt!=tmp.cnt)
            return cnt>tmp.cnt;
        return idx<tmp.idx;
    }
};
ll N, M, arr[105];
vector<st> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++)
        cin >> arr[i];
    for (ll i=0;i<M;i++){
        ll idx, cnt=0;
        cin >> idx;
        for (ll j=0;j<N;j++){
            char c;
            cin >> c;
            if (c=='O')
                cnt+=arr[j];
        }
        v.push_back({idx,cnt});
    }
    sort(v.begin(),v.end());
    cout << v[0].idx << " " << v[0].cnt;
    return 0;
}