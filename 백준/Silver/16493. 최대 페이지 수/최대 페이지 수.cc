#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct st{
    ll x, val;
};
ll N, M, DP[25][205];
vector<st> arr;
ll Knapsack(){
    ll ret=0;
    for (int i=0;i<M;i++){
        ll x=arr[i].x, v=arr[i].val;
        for (int j=0;j<=N;j++){
            if (j<x)
                DP[i+1][j]=DP[i][j];
            else
                DP[i+1][j]=max(DP[i][j],DP[i][j-x]+v);
        }
    }
    for (int i=0;i<=N;i++)
        ret=max(ret,DP[M][i]);
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll a, b;
        cin >> a >> b;
        arr.push_back({a,b});
    }
    cout << Knapsack();
    return 0;
}