#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, st, ed, arr[1005][1005];
set<ll> s[1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> st >> ed;
    while (M--){
        ll a, b;
        cin >> a >> b;
        s[a].insert(b);
        s[b].insert(a);
    }
    arr[0][st]=1;
    for (int i=1;i<=ed;i++){
        for (int j=1;j<=N;j++){
            for (auto x:s[j]){
                if (arr[i-1][x])
                    arr[i][j]=1;
            }
        }
    }
    ll chk=0;
    for (int i=1;i<=N;i++){
        if (arr[ed][i]){
            cout << i << " ";
            chk++;
        }
    }
    if (!chk)
        cout << "-1";
    return 0;
}