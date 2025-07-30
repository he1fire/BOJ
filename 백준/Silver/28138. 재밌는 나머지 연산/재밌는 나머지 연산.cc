#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (ll i=1;i*i<=N-M;i++){
        if ((N-M)%i==0){
            ans+=(i>M ? i : 0);
            if (i*i!=N-M)
                ans+=((N-M)/i>M ? (N-M)/i : 0);
        }
    }
    cout << ans;
    return 0;
}