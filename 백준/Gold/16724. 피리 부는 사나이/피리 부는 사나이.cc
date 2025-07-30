#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, arr[1000005], cnt[1000005]; 
ll dir[4][2]={{0,-1},{0,1},{-1,0},{1,0}};
char c[4]={'L','R','U','D'};
string S[1005];

ll Find(ll x){
    if (x==arr[x])
        return x;
    return arr[x]=Find(arr[x]);
}
void Union(ll x, ll y){
    arr[Find(x)]=Find(y);
}
void DFS(ll x, ll y){
    ll dx=x, dy=y;
    for (int i=0;i<4;i++){
        if (S[x][y]==c[i]){
            dx+=dir[i][0];
            dy+=dir[i][1];
        }
    }
    if (Find(x*M+y)!=Find(dx*M+dy)){
        Union(x*M+y, dx*M+dy);
        DFS(dx,dy);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N*M;i++)
        arr[i]=i;
    for (int i=0;i<N;i++)
        cin >> S[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            DFS(i,j);
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            Find(i*M+j);
            if (!cnt[arr[i*M+j]]){
                cnt[arr[i*M+j]]++;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}