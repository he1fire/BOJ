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
ll T, visit[2005];
vector<ABC> arr[2005];
priority_queue<ABC> pq;
ll Dijkstra(ll st, ll ed){
    fill(&visit[0],&visit[2004],INF);
    pq.push({st,0});
    visit[st]=0;
    while (!pq.empty()){
        ll x=pq.top().idx, curr=pq.top().dst;
        pq.pop();
        if (visit[x]<curr)
            continue;
        for (int i=0;i<arr[x].size();i++){
            ll dx=arr[x][i].idx, next=arr[x][i].dst;
            if (visit[dx]>next+curr){
                visit[dx]=next+curr;
                pq.push({dx,next+curr});
            }
        }
    }
    return visit[ed];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll n, m, t, s, g, h, len;
        vector<ll> v;
        cin >> n >> m >> t >> s >> g >> h;
        for (int i=0;i<2005;i++){
            arr[i].clear();
        }
        for (int i=0;i<m;i++){
            ll a, b, c;
            cin >> a >> b >> c;
            arr[a].push_back({b,c});
            arr[b].push_back({a,c});
            if ((a==g && b==h) || (a==h && b==g))
                len=c;
        }
        for (int i=0;i<t;i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for (auto i:v){
            if (Dijkstra(s,i)==len+min(Dijkstra(s,g)+Dijkstra(h,i),Dijkstra(s,h)+Dijkstra(g,i)))
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}