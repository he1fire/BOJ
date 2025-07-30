#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll x, y, z;
    ABC() {}
    ABC(ll x, ll y, ll z) : x(x), y(y), z(z) {}
};
ll N, M, K, visited[35][35][35], ans;
ll dir[6][3]={{0,0,1},{0,0,-1},{0,1,0},{0,-1,0},{1,0,0},{-1,0,0}};
string arr[35][35];
queue<ABC> q;
ll BFS(ABC st, ABC ed){
    fill(&visited[0][0][0],&visited[34][34][35],-1);
    visited[st.x][st.y][st.z]=0;
    q.push(st);
    while (!q.empty()){
        ll x=q.front().x, y=q.front().y, z=q.front().z;
        q.pop();
        for (int i=0;i<6;i++){
            ll dx=x+dir[i][0], dy=y+dir[i][1], dz=z+dir[i][2];
            if (dx<0 || dx>=K || dy<0 || dy>=N || dz<0 || dz>=M)
                continue;
            if (arr[dx][dy][dz]!='#' && visited[dx][dy][dz]==-1){
                visited[dx][dy][dz]=visited[x][y][z]+1;
                q.push({dx,dy,dz});
            }
        }
    }
    return visited[ed.x][ed.y][ed.z];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1){
        cin >> K >> N >> M;
        if (N==0 && M==0 && K==0)
            break;
        for (int i=0;i<K;i++){
            for (int j=0;j<N;j++){
                cin >> arr[i][j];
            }
            string tmp;
            getline(cin,tmp);
            cin.ignore();
        }
        ABC st, ed;
        for (int i=0;i<K;i++){
            for (int j=0;j<N;j++){
                for (int k=0;k<M;k++){
                    if (arr[i][j][k]=='S')
                        st.x=i, st.y=j, st.z=k;
                    if (arr[i][j][k]=='E')
                        ed.x=i, ed.y=j, ed.z=k;
                }
            }
        }
        ans=BFS(st, ed);
        if (ans==-1)
            cout << "Trapped!\n";
        else
            cout << "Escaped in " << ans << " minute(s).\n";
    }
    return 0;
}