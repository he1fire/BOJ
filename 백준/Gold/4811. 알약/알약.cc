#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[35][35];
ll DP(ll now, ll x){
    if (now==0)
        return 1;
    else if (x<0)
        return 0;
    else if (arr[now][x]!=-1)
        return arr[now][x];
    else
        return arr[now][x]=DP(now-1,x+1)+DP(now,x-1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&arr[0][0],&arr[34][35],-1);
    while (1){
        ll N;
        cin >> N;
        if (N==0)
            break;
        cout << DP(N,0) << "\n";
    }
    return 0;
}