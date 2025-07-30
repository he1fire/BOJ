#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll N, M, cnt, ans[55][55], arr[55][55];
void Matpro(ll (*x)[55],ll a[][55],ll b[][55]){
    ll c[55][55]={0};
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            for (int k=0;k<N;k++)
                c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            x[i][j]=c[i][j];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        arr[b-1][a-1]=arr[a-1][b-1]=1;
    }
    cin >> cnt;
    for (int i=0;i<N;i++)
        ans[i][i]=1;
    while (cnt){
        if (cnt&1)
            Matpro(ans,ans,arr);
        Matpro(arr,arr,arr);
        cnt>>=1;
    }
    cout << ans[0][0];
    return 0;
}