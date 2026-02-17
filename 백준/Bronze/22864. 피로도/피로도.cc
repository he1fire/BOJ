#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll A, B, C, N, ans, cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> A >> B >> C >> N;
    for (ll i=0;i<24;i++){
        if (cnt+A<=N)
            ans+=B, cnt+=A;
        else
            cnt-=C;
        cnt=max(cnt,(ll)0);
    }
    cout << ans;
    return 0;
}