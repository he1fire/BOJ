#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout << (N%2 ? v[N/2] : v[N/2-1]);
    return 0;
}