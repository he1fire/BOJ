#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N, M, DP[105][2];
set<ll> s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=0, a;i<M;i++){
        cin >> a;
        s.insert(a);
    }
    DP[0][1]=INF;
    for (ll i=1;i<=N;i++){
        if (s.find(i)!=s.end())
            DP[i][0]=min(DP[i-1][0],DP[i-1][1]);
        else
            DP[i][0]=INF;
        DP[i][1]=min(DP[i-1][0]+7,DP[i-1][1]+2);
    }
    cout << min(DP[N][0],DP[N][1]);
    return 0;
}