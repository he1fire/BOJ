#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout << v[0]*v[v.size()-1];
    return 0;
}