#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
map<string,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        string S;
        ll a;
        cin >> S >> a;
        m[S]+=a;
    }
    for (auto x:m){
        if (x.second==5)
            ans=1;
    }
    cout << (ans ? "YES" : "NO");
    return 0;
}