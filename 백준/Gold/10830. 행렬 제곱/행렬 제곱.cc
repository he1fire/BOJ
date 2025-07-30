#include <bits/stdc++.h>
#define ll long long
#define MOD 1000
using namespace std;
ll N, M, cnt, ans[10][10], arr[10][10];
void Matpro(ll (*x)[10],ll a[][10],ll b[][10]){
    ll c[10][10]={0};
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
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++)
        ans[i][i]=1;
    while (M){
        if (M&1)
            Matpro(ans,ans,arr);
        Matpro(arr,arr,arr);
        M>>=1;
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}