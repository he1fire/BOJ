#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i=1;i<=N;i++)
        ans+=abs(v[i-1]-i);
    cout << ans;
    return 0;
}