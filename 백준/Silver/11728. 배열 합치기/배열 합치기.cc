#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
ll N, M;
int main(){
    cin >> N >> M;
    for (ll i=0;i<N+M;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (auto i:v)
        cout << i << " ";
    return 0;
}