#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
struct ABC{
    ll idx, dst;
    ABC(){}
    ABC(ll idx, ll dst) : idx(idx), dst(dst) {}
};
bool operator<(ABC x, ABC y){
    return x.dst>y.dst;
}
ll N, K, visited[100005];
priority_queue<ABC> pq;
ll Dijkstra(){
    fill(&visited[0],&visited[100004],INF);
    pq.push({N,0});
    visited[N]=0;
    while (!pq.empty()){
        ll x=pq.top().idx, curr=pq.top().dst;
        pq.pop();
        if (visited[x]<curr)
            continue;
        if (x<100000 && visited[x+1]>curr+1){
            visited[x+1]=curr+1;
            pq.push({x+1,curr+1});
        }
        if (x>0 && visited[x-1]>curr+1){
            visited[x-1]=curr+1;
            pq.push({x-1,curr+1});
        }
        if (x!=0){
            for (int i=2;x*i<=100000;i*=2){
                if (visited[x*i]>curr){
                    visited[x*i]=curr;
                    pq.push({x*i,curr});
                }
            }
        }
    }
    return visited[K];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> K;
    cout << Dijkstra();
    return 0;
}