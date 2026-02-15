#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, chk=-1, cnt, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a;
        cin >> a;
        if (a!=chk){
            chk=a;
            v.push_back(cnt);
            cnt=0;
        }
        cnt++;
    }
    v.push_back(cnt);
    for (ll i=0;i<v.size()-1;i++)
        ans=max(ans,v[i]+v[i+1]);
    cout << ans;
    return 0;
}