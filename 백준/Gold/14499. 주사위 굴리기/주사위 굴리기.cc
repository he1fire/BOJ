#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, x, y, T;
ll arr[25][25];
ll dice[6];//아래 위 앞 뒤 왼쪽 오른쪽
ll dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};// 동 서 북 남
ll roll[4][6]={{5,4,2,3,0,1},{4,5,2,3,1,0},{2,3,1,0,4,5},{3,2,0,1,4,5}};// 동 서 북 남
void Move(ll turn){
    ll tmp[6]={0};
    for (int i=0;i<6;i++){
        tmp[i]=dice[roll[turn][i]];
    }
    for (int i=0;i<6;i++){
        dice[i]=tmp[i];
    }
    if (arr[x][y]){
        dice[0]=arr[x][y];
        arr[x][y]=0;
    }
    else{
        arr[x][y]=dice[0];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> x >> y >> T;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    while (T--){
        ll a;
        cin >> a;
        ll ax=x+dir[a-1][0], ay=y+dir[a-1][1];
        if (ax<0 || ax>=N || ay<0 || ay>=M)
            continue;
        x=ax;
        y=ay;
        Move(a-1);
        cout << dice[1] << "\n";
    }
    return 0;
}