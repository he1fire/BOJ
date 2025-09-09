#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
map<string,ll> m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        string s;
        cin >> s;
        m[s]++;
        if (m[s]>4 && ans==0)
            ans=i;
    }
    cout << ans;
    return 0;
}