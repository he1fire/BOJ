#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000
using namespace std;
ll N, M, cnt, ans[2][2], arr[2][2]={{1,1},{1,0}};
void Matpro(ll (*x)[2],ll a[][2],ll b[][2]){
    ll c[10][10]={0};
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            for (int k=0;k<2;k++)
                c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++)
            x[i][j]=c[i][j];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<2;i++)
        ans[i][i]=1;
    while (N){
        if (N&1)
            Matpro(ans,ans,arr);
        Matpro(arr,arr,arr);
        N>>=1;
    }
    cout << ans[0][1];
    return 0;
}