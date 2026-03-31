#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct xy{
    ll x, y;
};
ll N, M, arr[505][505], dir[8][2]={{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
xy st;
void f(){
    fill(&arr[0][0],&arr[504][505],-1);
    queue<xy> q;
    q.push(st);
    arr[st.x][st.y]=0;
    while (!q.empty()){
        ll x=q.front().x, y=q.front().y;
        q.pop();
        for (ll i=0;i<8;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>N || dy<0 || dy>N)
                continue;
            if (arr[dx][dy]!=-1)
                continue;
            q.push({dx,dy});
            arr[dx][dy]=arr[x][y]+1;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M >> st.x >> st.y;
    f();
    while (M--){
        ll a, b;
        cin >> a >> b;
        cout << arr[a][b] << " ";
    }
}