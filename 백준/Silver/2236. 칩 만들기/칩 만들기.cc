#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{ll x, y;};
ll N, K, arr[55];
vector<xy> v;
ll cmp(xy x, xy y){
    return x.x>y.x;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    for (ll i=1, a;i<=N;i++){
        cin >> a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end(),cmp);
    for (ll i=0;i<min(N,K);i++){
        cout << v[i].y << "\n";
        arr[v[i].y]=v[i].y;
    }
    for (ll i=0;i<K-N;i++)
        cout << "0\n";
    for (ll i=1;i<=N;i++)
        cout << arr[i] << "\n";
    return 0;
}