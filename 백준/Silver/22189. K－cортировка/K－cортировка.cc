#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        v.emplace_back();
        cin >> v.back();
    }
    cin >> M;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N-i;j++){
            if (j+M<N && v[j]>v[j+M]){
                swap(v[j],v[j+M]);
                ans++;
            }
        }
    }
    for (ll i=0;i<N-1;i++){
        if (v[i]>v[i+1])
            ans=-1;
    }
    cout << ans;
    return 0;
}