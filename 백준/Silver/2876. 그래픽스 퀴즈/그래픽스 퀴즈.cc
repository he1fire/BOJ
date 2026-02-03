#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[100005][10], mx, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        if (i==0)
            arr[i][a]=arr[i][b]=1;
        else{
            arr[i][a]=arr[i-1][a]+1;
            arr[i][b]=arr[i-1][b]+1;
        }
        for (ll j=1;j<=5;j++){
            if (arr[i][j]>mx){
                mx=arr[i][j];
                ans=j;
            }
        }
    }
    cout << mx << " " << ans;   
    return 0;
}