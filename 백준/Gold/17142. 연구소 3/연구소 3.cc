#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans=INF, arr[55][55], visited[55][55], dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
vector<pll> st;
vector<ll> cnt;
queue<pll> q;
ll BFS(){
    ll ret=0;
    while(!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=N)
                continue;
            if (visited[ax][ay]==-1 && arr[ax][ay]!=1){
                q.push({ax,ay});
                visited[ax][ay]=visited[x][y]+1;
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (arr[i][j]==0)
                ret=max(visited[i][j],ret);
            if (visited[i][j]==-1 && arr[i][j]==0)
                return INF;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
            if (arr[i][j]==2)
                st.push_back({i,j});
        }
    }
    for (int i=0;i<st.size()-M;i++)
        cnt.push_back(0);
    for (int i=0;i<M;i++)
        cnt.push_back(1);
    do {
        fill(&visited[0][0],&visited[54][55],-1);
        for (int i=0;i<st.size();i++){
            if (cnt[i]==1){
                q.push(st[i]);
                visited[st[i].first][st[i].second]=0;
            }
        }
        ans=min(BFS(),ans);
    } while (next_permutation(cnt.begin(),cnt.end()));
    cout << (ans==INF ? -1 : ans);
    return 0;
}