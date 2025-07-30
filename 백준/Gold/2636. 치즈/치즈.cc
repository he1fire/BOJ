#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, ans, arr[105][105], visited[105][105], dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
queue<pll> q;
void air(){
	queue<pll> a;
	fill(&visited[0][0],&visited[104][105],0);
	a.push({0,0});
	while (!a.empty()){
		ll x=a.front().first, y=a.front().second;
		a.pop();
		for (int i=0;i<4;i++){
			ll dx=x+dir[i][0], dy=y+dir[i][1];
			if (dx<0 || dx>=N || dy<0 || dy>=M || visited[dx][dy])
				continue;
			if (arr[dx][dy]==0){
				visited[dx][dy]=1;
				a.push({dx,dy});
			}
			else {
				q.push({x,y});
			}
		}
	}
}
void melt(){
	air();
	while (!q.empty()){
		ll x=q.front().first, y=q.front().second;
		q.pop();
		for (int i=0;i<4;i++){
			ll dx=x+dir[i][0], dy=y+dir[i][1];
			if (dx<0 || dx>=N || dy<0 || dy>=M)
				continue;
			if (arr[dx][dy])
				arr[dx][dy]=0;
		}
	}
}
int chk(){
	ll ret=0;
	for (int i=0;i<N;i++){
		for (int j=0;j<M;j++){
			ret+=arr[i][j];
		}
	}
	return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
	for (int i=0;i<N;i++){
		for (int j=0;j<M;j++){
			cin >> arr[i][j];
		}
	}
	for (int i=0;1;i++){
		if (!chk()){
			cout << i << "\n" << ans;
			break;
		}
		ans=chk();
		melt();
	}
    return 0;
}