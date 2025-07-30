#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, visit1[105], visit2[105];
vector<ll> arr1[105], arr2[105];
ll BFS(ll a){
	fill(&visit1[0],&visit1[104],-1);
	fill(&visit2[0],&visit2[104],-1);
	ll ret=0;
	queue<ll> q;
	q.push(a);
	visit1[a]=0;
	while (!q.empty()){
		ll x=q.front();
		q.pop();
		for (auto ax:arr1[x]){
			if (visit1[ax]==-1){
				q.push(ax);
				visit1[ax]=visit1[x]+1;
			}
		}
	}
	q.push(a);
	visit2[a]=0;
	while (!q.empty()){
		ll x=q.front();
		q.pop();
		for (auto ax:arr2[x]){
			if (visit2[ax]==-1){
				q.push(ax);
				visit2[ax]=visit2[x]+1;
			}
		}
	}
	for (int i=1;i<=N;i++){
		if (visit1[i]==-1 && visit2[i]==-1)
			ret++;
	}
	return ret;
}
int main (){
	cin >> N >> M;
	for (int i=0;i<M;i++){
		ll a, b;
		cin >> a >> b;
		arr1[a].push_back(b);
		arr2[b].push_back(a);
	}
	for (int i=1;i<=N;i++)
		cout << BFS(i) << "\n";
   return 0;
}