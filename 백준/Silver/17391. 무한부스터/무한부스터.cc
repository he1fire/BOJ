#include <bits/stdc++.h>
#define ll long long
#define INF 1000000007
using namespace std;
ll N, M, arr[305][305], visit[305][305];
void f(ll x, ll y, ll a){
    for (int i=x+1;i<=x+a;i++)
        visit[i][y]=min(visit[i][y],visit[x][y]+1);
    for (int i=y+1;i<=y+a;i++)
        visit[x][i]=min(visit[x][i],visit[x][y]+1);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(&visit[0][0],&visit[304][305],INF);
    visit[0][0]=0;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            f(i,j,arr[i][j]);
    }
    cout << visit[N-1][M-1];
    return 0;
}