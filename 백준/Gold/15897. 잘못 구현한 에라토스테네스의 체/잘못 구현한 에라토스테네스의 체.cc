#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, cnt;
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N;
    for (int i=1;i<=N;i+=cnt){
        ll a=(N-1)/i, b=(N-1)%i;
        if (a==0)
            cnt=1;
        else
            cnt=(b/a)+1;
        ans+=cnt*(a+1);
    }
    cout << ans;
    return 0;
}