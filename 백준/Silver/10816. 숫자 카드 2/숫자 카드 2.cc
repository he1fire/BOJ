#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<ll,ll> mp;
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        if (mp.find(a)!=mp.end())
            mp[a]++;
        else
            mp[a]=1;
    }
    cin >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        if (mp.find(a)!=mp.end())
            cout << mp[a] << " ";
        else
            cout << "0 ";
    }
    return 0;
}