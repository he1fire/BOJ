#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll T, N, M;
string S[55];
ll f( ll a, ll b, ll c, ll d){
    for (ll i=a;i<=c;i++){
        for (ll j=b;j<=d;j++){
            if (S[i][j]!='G' && S[i][j]!='S')
                return -1;
        }
    }
    return (c-a+1)*(d-b+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (ll i=1;i<=T;i++){
        ll ans=0;
        cin >> M >> N;
        for (ll j=0;j<N;j++)
            cin >> S[j];
        for (ll a=0;a<N;a++){
            for (ll b=0;b<M;b++){
                for (ll c=a;c<N;c++){
                    for (ll d=b;d<M;d++)
                        ans=max(ans,f(a,b,c,d));
                }
            }
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}