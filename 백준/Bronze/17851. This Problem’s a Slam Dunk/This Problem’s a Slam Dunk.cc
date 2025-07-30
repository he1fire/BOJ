#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans;
vector<ll> v[2];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<2;i++){
        for (int j=0,a;j<5;j++){
            cin >> a;
            v[i].push_back(a);
        }
        sort(v[i].begin(),v[i].end());
    }
    for (int i=0;i<5;i++)
        ans+=(v[0][i]>v[1][i]);
    cout << ans;
    return 0;
}