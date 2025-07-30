#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    vector<ll> v, arr;
    map<ll,ll> mp;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
        arr.push_back(a);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for (ll i=0;i<v.size();i++)
        mp[v[i]]=i;
    for (ll i=0;i<N;i++)
        cout << mp[arr[i]] << " ";
    return 0;
}