#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string,ll> m;
ll N, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string a, b;
        cin >> a >> b;
        if (a=="ChongChong" || b=="ChongChong"){
            m[a]=m[b]=1;
        }
        else if (m[a] || m[b]){
            m[a]=m[b]=1;
        }
        else
            m[a]=m[b]=0;
    }
    for (auto i:m){
        if (i.second)
            ans++;
    }
    cout << ans;
    return 0;
}