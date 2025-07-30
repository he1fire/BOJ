#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
ll N, arr[20][20], dp[20][100000];
vector<ll> v; 
ll TSP(ll curr, ll visit){
    if (visit==(1<<N)-1)
        return arr[curr][0]> 0 ? arr[curr][0] : INF;
    ll &ret=dp[curr][visit];
    if (ret!=0)
        return ret;
    ret=INF;
    for (int i=0;i<=N;i++){
        if (visit & (1<<i))
            continue;
        if (arr[curr][i]==0)
            continue;
        ret=min(ret,TSP(i,visit | (1<<i))+arr[curr][i]);
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    cout << TSP(0, 1);
    return 0;
}