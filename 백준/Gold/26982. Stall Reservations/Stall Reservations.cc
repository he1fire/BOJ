#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
struct ABC{ll st, ed, idx;};
ll N, ans=0, arr[50005];
vector<ABC> v;
priority_queue<pll,vector<pll>,greater<pll>> pq;
bool cmp(ABC x, ABC y){
    if (x.st!=y.st)
        return x.st<y.st;
    return x.ed<y.ed;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b,i});
    }
    sort(v.begin(),v.end(),cmp);
    for (int i=0;i<N;i++){
        if (!pq.empty() && pq.top().first<v[i].st){
            arr[v[i].idx]=pq.top().second;
            pq.pop();
        }
        else
            arr[v[i].idx]=++ans;
        pq.push({v[i].ed,arr[v[i].idx]});
    }
    cout << ans << "\n";
    for (int i=0;i<N;i++)
        cout << arr[i] << "\n";
    return 0;
}