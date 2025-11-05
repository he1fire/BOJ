#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[200005], ans[200005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=0;i<N;i++)
        cin >> arr[i];
    for (ll i=N-1;i>=0;i--){
        if (i+arr[i]+1>=N)
            ans[i]=1;
        else
            ans[i]=ans[i+arr[i]+1]+1;
    }
    for (ll i=0;i<N;i++)
        cout << ans[i] << " ";
    return 0;
}