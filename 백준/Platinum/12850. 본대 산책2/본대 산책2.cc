#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
ll N, ans[8][8];
ll arr[8][8]=
{{0,1,1,0,0,0,0,0},
{1,0,1,1,0,0,0,0},
{1,1,0,1,1,0,0,0},
{0,1,1,0,1,1,0,0},
{0,0,1,1,0,1,1,0},
{0,0,0,1,1,0,0,1},
{0,0,0,0,1,0,0,1},
{0,0,0,0,0,1,1,0}};
void Matpro(ll (*x)[8],ll a[][8],ll b[][8]){
    ll c[8][8]={0};
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            for (int k=0;k<8;k++)
                c[i][j]=(c[i][j]+a[i][k]*b[k][j])%MOD;
        }
    }
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++)
            x[i][j]=c[i][j];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<8;i++)
        ans[i][i]=1;
    while (N){
        if (N&1)
            Matpro(ans,ans,arr);
        Matpro(arr,arr,arr);
        N>>=1;
    }
    cout << ans[0][0];
    return 0;
}