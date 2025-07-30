#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
struct A{
    ll x[25][25];
};
ll T, N, D, ans[25][25], chk[25][25];
struct A arr[105];
void Matpro(ll (&ans)[25][25],ll (&a)[25][25],ll (&b)[25][25]){
    ll c[25][25]={0};
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            for (int k=1;k<=N;k++)
                c[i][j]=(c[i][j]+(a[i][k]*b[k][j]))%MOD;
        }
    }
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++)
            ans[i][j]=c[i][j];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T >> N >> D;
    for (int i=0;i<T;i++){
        ll a;
        cin >> a;
        for (ll j=0;j<a;j++){
            ll  b, c, d;
            cin >> b >> c >> d;
            arr[i].x[b][c]=d;
        }
    }
    for (int i=1;i<=N;i++)
        ans[i][i]=1;
    for (int i=1;i<=N;i++)
        chk[i][i]=1;
    for (int i=0;i<T;i++){
        Matpro(chk,chk,arr[i].x);
    }
    ll x=D/T;
    while (x){
            if (x&1) Matpro(ans,ans,chk);
            Matpro(chk,chk,chk);
        x>>=1;
    }
    for (int i=0;i<D%T;i++){
        Matpro(ans,ans,arr[i].x);
    }
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}