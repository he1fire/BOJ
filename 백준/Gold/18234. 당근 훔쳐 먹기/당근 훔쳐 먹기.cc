#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct wp{
    ll w, p;
    bool operator<(wp& tmp){
        return p<tmp.p;
    }
};
ll N, M, ans;
vector<wp> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    for (int i=0;i<N;i++)
        ans+=v[i].w+v[i].p*(i+M-N);
    cout << ans;
    return 0;
}