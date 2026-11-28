#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[2050];
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
        arr[v[i]]=1;
    }
    cin >> M;
    for (ll i=0;i<M;i++){
        ll a;
        cin >> a;
        if (arr[v[a-1]+1] || v[a-1]==2019)
            continue;
        swap(arr[v[a-1]],arr[v[a-1]+1]);
        v[a-1]++;
    }
    for (auto x:v)
        cout << x << "\n";
    return 0;
}