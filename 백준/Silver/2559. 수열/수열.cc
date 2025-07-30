#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
ll N, M, ans=-INF;
ll arr[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    for (int i=0;i<=N-M;i++){
        ans=max(ans,arr[i+M]-arr[i]);
    }
    cout << ans;
    return 0;
}