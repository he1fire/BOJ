#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll> M;
ll N, cnt, ans;
int main(){
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        M[a]++;
    }
    for (auto i:M){
        if (i.second>cnt){
            ans=i.first;
            cnt=i.second;
        }
    }
    cout << ans;
    return 0;
}