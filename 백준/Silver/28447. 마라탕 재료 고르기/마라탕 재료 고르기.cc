#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans=-1e9+7;
vector<ll> arr[15], v;
int main(){
    ios::sync_with_stdio(0);
    cin >> N >> M;
    for (ll i=0;i<N;i++){
        for (ll j=0;j<N;j++){
            ll a;
            cin >> a;
            arr[i].push_back(a);
        }
    }
    for (ll i=0;i<N-M;i++)
        v.push_back(0);
    for (ll i=0;i<M;i++)
        v.push_back(1);
    do{
        ll cnt=0;
        for (ll i=0;i<N;i++){
            for (ll j=i+1;j<N;j++){
                if (v[i] && v[j])
                    cnt+=arr[i][j];
            }
        }
        ans=max(ans,cnt);
    } while(next_permutation(v.begin(),v.end()));
    cout << ans;
    return 0;
}