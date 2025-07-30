#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[1000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        ll x, tmp;
        cin >> x;
        arr[i]=arr[i-1]+x;
        if (i-M<1)
            tmp=arr[i];
        else
            tmp=arr[i]-arr[i-M];
        if (129<=tmp && tmp<=138)
            ans++;
    }
    cout << ans;
    return 0;
}