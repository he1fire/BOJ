#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[1005][1005], ans;
ll f (ll x){
    ll ret=0, cnt=0;
    for (ll a=x;a;a/=10,cnt++);
    cnt--;
    while (x){
        ll a=x%10;
        for (ll i=0;i<cnt;i++)
            a*=10;
        ret+=a;
        cnt--;
        x/=10;
    }
    return ret;
}
int main(){
    for (int i=1;i<=1000;i++){
        for (int j=1;j<=1000;j++)
            arr[i][j]=f(i*j);
    }
    cin >> N >> M;
    for (int i=1;i<=M;i++)
        ans=max(ans,arr[N][i]);
    cout << ans;
    return 0;
}