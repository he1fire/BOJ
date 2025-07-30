#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, arr[305][305], DP[305][305];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=M;i++){
        for (int j=1;j<=N;j++){
            cin >> arr[i][j];
        }
    }
    DP[1][1]=1;
    for (int i=1;i<N+M-1;i++){
        for (int j=0;j<=i;j++){
            ll x=j+1, y=i-j+1;
            if (x>N || y>M)
                continue;
            if (arr[y][x]==1 && (DP[y-1][x] || DP[y][x-1]))
                DP[y][x]=1;
        }
    }
    DP[M][N] ? (cout << "Yes") : (cout << "No");
    return 0;
}