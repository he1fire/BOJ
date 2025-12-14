#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, now;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(),v.rend());
    for (auto x:v){
        if (now==0 || x*2<=now){
            now=x;
            ans++;
        }
    }
    cout << ans; 
    return 0;
}