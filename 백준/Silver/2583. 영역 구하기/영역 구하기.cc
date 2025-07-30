#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, arr[105][105], visit[105][105], dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
vector<ll> v;
queue<pll> q;
void BFS(ll a, ll b){
    ll cnt=0;
    q.push({a,b});
    visit[a][b]=1;
    while (!q.empty()){
        ll x=q.front().first, y=q.front().second;
        q.pop();
        cnt++;
        for (int i=0;i<4;i++){
            ll ax=x+dir[i][0], ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]==0 && visit[ax][ay]==0){
                q.push({ax,ay});
                visit[ax][ay]=1;
            }
        }
    }
    v.push_back(cnt);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> T;
    while (T--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i=a;i<c;i++){
            for (int j=b;j<d;j++)
                arr[i][j]=1;
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]==0 && visit[i][j]==0)
                BFS(i,j);
        }
    }
    cout << v.size() << "\n";
    sort(v.begin(),v.end());
    for (auto i:v)
        cout << i << " ";
    return 0;
}