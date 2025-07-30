#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
bool arr[1000005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        if (arr[a]==0 && arr[b]==0 && arr[c]==0)
            ans++;
        arr[a]=arr[b]=arr[c]=1;
    }
    cout << ans;
    return 0;
}