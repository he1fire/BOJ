#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
set<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0;i<M;i++){
        ll a;
        cin >> a;
        s.insert(a);
    }
    for (auto x:s){
        if (N%x==0 && s.find(N/x)!=s.end()){
            cout << x << " " << N/x;
            break;
        }
    }
    return 0;
}