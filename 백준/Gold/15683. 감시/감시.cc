#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
	ll x, y, kind, now;
	ABC() {}
    ABC(ll x, ll y, ll kind, ll now): x(x), y(y), kind(kind), now(now) {}
};
vector<ABC> v;
vector<ll> cctv[5]={{1,2,4,8},{5,10},{3,6,9,12},{7,11,13,14},{15}};
ll N, M, ans, arr[10][10], visited[10][10], dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
ll scan(){
	ll ret=0;
	fill(&visited[0][0], &visited[9][10], 0);
	for (auto i:v){
		ll tmp=i.now;
		for (int j=0;j<4;j++){
			if ((1<<j) & tmp){
				ll dx=i.x, dy=i.y;
				while (0<=dx+dir[j][0] && dx+dir[j][0]<N && 0<=dy+dir[j][1] && dy+dir[j][1]<M){
					dx+=dir[j][0];
					dy+=dir[j][1];
					if (arr[dx][dy]==6)
						break;
					visited[dx][dy]=1;
				}
			}
		}
	}
	for (int i=0;i<N;i++){
		for (int j=0;j<M;j++){
			if (arr[i][j]==0 && visited[i][j]==0)
				ret++;
		}
	}
	return ret;
}
ll f(ll x){
	ll ret=INF;
	if (x==v.size())
		return scan();
	for (int i=0;i<cctv[v[x].kind-1].size();i++){
		v[x].now=cctv[v[x].kind-1][i];
		ret=min(ret,f(x+1));
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
			if (0<arr[i][j] && arr[i][j]<6)
				v.push_back({i,j,arr[i][j],0});
		}
	}
	cout << f(0);
    return 0;
}