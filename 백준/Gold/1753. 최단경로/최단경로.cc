#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
struct ABC
{
    ll idx, dst;
    ABC(){}
    ABC(ll idx, ll dst): idx(idx), dst(dst) {}
};
bool operator<(ABC a, ABC b){
    return a.dst>b.dst;
}
ll V, E, K, visit[20005];
vector<ABC> arr[20005];
priority_queue<ABC> pq;
void Dijkstra(){
    fill(&visit[0], &visit[20004], INF);
    pq.push(ABC(K,0));
    visit[K]=0;
    while (!pq.empty()){
        ll curr=pq.top().dst, x=pq.top().idx; 
        pq.pop();
        if (visit[x]<curr)
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll next=arr[x][i].dst, dx=arr[x][i].idx;
            if (visit[dx]>curr+next){
                visit[dx]=curr+next;
                pq.push(ABC(dx,curr+next));
            }  
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> V >> E >> K;
    for (int i=0;i<E;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back(ABC(b,c));
    }
    Dijkstra();
    for (int i=1;i<=V;i++){
        visit[i]==INF ? cout << "INF\n" : cout << visit[i] << "\n";
    }
    return 0;
}