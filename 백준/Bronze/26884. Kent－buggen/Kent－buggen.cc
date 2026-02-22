#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<string, ll> m;
ll N, ans;
string S;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> S;
        m[S]++;
    }
    for (auto x:m){
        if (x.second>1)
            ans++;
    }
    cout << ans;
    return 0;
}