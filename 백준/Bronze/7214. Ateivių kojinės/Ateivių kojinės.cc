#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    while (M--){
        ll a;
        cin >> a;
        if (a<N)
            ans+=a;
        else
            ans+=N-1;
    }
    cout << ans+1;
    return 0;
}