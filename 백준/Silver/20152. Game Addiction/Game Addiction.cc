#include <bits/stdc++.h>
#define ll long long
#define INF (1e9)+7
using namespace std;
ll N, M, DP[35][35];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    if (N>M)
        swap(N,M);
    DP[N][N]=1;
    for (int i=N;i<=M;i++){
        for (int j=N;j<=i;j++){
            if (i>0)
                DP[i][j]+=DP[i-1][j];
            if (j>0)
                DP[i][j]+=DP[i][j-1];
        }
    }
    cout << DP[M][M];
    return 0;
}