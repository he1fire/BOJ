#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    while (N--){
        cin >> M;
        map<string,ll> m;
        string ans="SYJKGW";
        for (int i=0;i<M;i++){
            string a;
            cin >> a;
            m[a]++;
        }
        for (auto x:m){
            if (x.second>M/2)
                ans=x.first;
        }
        cout << ans << "\n";
    }
    return 0;
}