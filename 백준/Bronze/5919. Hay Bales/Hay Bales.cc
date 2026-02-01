#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        cnt+=a;
        v.push_back(a);
    }
    for (auto x:v){
        if (x>cnt/N)
            ans+=x-cnt/N;
    }
    cout << ans;
    return 0;
}