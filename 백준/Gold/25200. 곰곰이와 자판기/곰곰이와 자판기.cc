#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, arr[300005];
vector<pll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    for (int i=1;i<=N;i++)
        arr[i]=i;
    for (int i=M-1;i>=0;i--)
        arr[v[i].first]=arr[v[i].second];
    for (int i=1;i<=N;i++)
        cout << arr[i] << " ";
    return 0;
}