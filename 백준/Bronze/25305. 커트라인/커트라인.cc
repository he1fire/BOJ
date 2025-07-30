#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
vector<ll> v;
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<ll>());
    cout << v[M-1];
    return 0;
}