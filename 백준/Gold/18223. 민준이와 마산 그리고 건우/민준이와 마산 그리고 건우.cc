#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll V, E, P, visit[5005];
vector<pll> arr[5005];
priority_queue<pll,vector<pll>, greater<pll> > pq;
ll Dijkstra(ll st, ll ed){
    fill(&visit[0], &visit[5004], INF);
    pq.push({0,st});
    visit[st]=0;
    while (!pq.empty()){
        ll curr=pq.top().first, x=pq.top().second; 
        pq.pop();
        if (visit[x]<curr)
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll next=arr[x][i].first, dx=arr[x][i].second;
            if (visit[dx]>curr+next){
                visit[dx]=curr+next;
                pq.push({curr+next,dx});
            }
                
        }
    }
     return visit[ed];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> V >> E >> P;
    for (int i=0;i<E;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({c,b});
        arr[b].push_back({c,a});
    }
    Dijkstra(1,V)==Dijkstra(1,P)+Dijkstra(P,V) ? cout << "SAVE HIM" : cout << "GOOD BYE";
    return 0;
}