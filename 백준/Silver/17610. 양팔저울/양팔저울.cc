#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt, arr[14], dp[14][2600005];
void f(ll x, ll y){
    if (x>N || dp[x][y])
        return;
    dp[x][y]=1;
    f(x+1,y+arr[x]);
    f(x+1,abs(y-arr[x]));
    f(x+1,y);

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> arr[i];
        cnt+=arr[i];
    }
    f(0,0);
    for (int i=1;i<=cnt;i++)
        if (!dp[N][i])
            ans++;
    cout << ans;
    return 0;
}