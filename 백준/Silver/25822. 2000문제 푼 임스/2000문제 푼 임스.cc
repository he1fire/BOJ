#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll N, mx, ans, coin;
ld M;
vector<ll> v;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N;
    coin=min(floor(M/(0.99)),(ld)2);
    for (ll i=0,a;i<N;i++){
        cin >> a;
        v.push_back(a);
        mx=max(mx,a);
    }
    ll L=0, R=0, chk=0;
    while (R<N){
        if (v[R])
            R++;
        else if (!v[R] && chk<coin){
            R++;
            chk++;
        }
        else{
            if (!v[L])
                chk--;
            L++;
        }
        ans=max(ans,R-L);
    }
    cout << ans << "\n" << mx;
    return 0;
}