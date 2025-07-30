#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[70][70];
ll DP(ll now, ll x){
    if (arr[now][x]!=-1)
        return arr[now][x];
    else if (x<now)
        return pow(2,x);
    else if (now==0)
        return 0;
    else
        return arr[now][x]=DP(now+1,x-1)+DP(now-1,x-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    fill(&arr[0][0],&arr[69][70],-1);
    cout << DP(N,M);
    return 0;
}