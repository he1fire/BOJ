#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans=0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        ans=max(ans,a-N+i);
    }
    cout << ans;
    return 0;
}