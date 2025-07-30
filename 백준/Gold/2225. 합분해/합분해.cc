#include <bits/stdc++.h>
#define ll long long
#define MOD (ll)1000000000
using namespace std;
ll N, M, DP[205][205];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<=N;i++)
        DP[i][1]=1;
    for (int i=2;i<=M;i++){
        for (int j=0;j<=N;j++){
            for (int k=0;k<=j;k++){
                DP[j][i]=(DP[j][i]+DP[k][i-1])%MOD;
            }
        }
    }
    cout << DP[N][M];
    return 0;
}