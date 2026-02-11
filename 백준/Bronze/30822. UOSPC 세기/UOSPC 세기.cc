#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=1005;
string S, chk="uospc";
map<char,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (auto x:chk)
        m[x]=0;
    for (auto x:S){
        if (chk.find(x)!=string::npos)
            m[x]++;
    }
    for (auto x:m)
        ans=min(x.second,ans);
    cout << ans;
    return 0;
}