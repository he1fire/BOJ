#include <bits/stdc++.h>
#define ll long long
#define INF 987654321
using namespace std;
typedef pair<ll,ll> pll;
ll T, N, M, hu, visit[105][105], cnt[105];
vector<pll> arr[105];
priority_queue<pll,vector<pll>,greater<pll>> pq;
void BFS(){
    fill(&visit[0][0],&visit[104][105],-1);
    for (int i=1;i<=N;i++){
        pq.push({0,i});
        while (!pq.empty()){
            ll curr=pq.top().first, x=pq.top().second;
            pq.pop();
            if (visit[i][x]!=-1)
                continue;
            visit[i][x]=curr;
            for (auto j:arr[x]){
                ll next=j.first, ax=j.second;
                if (visit[i][ax]==-1)
                    pq.push({curr+next,ax});
            }
        }
    }
}
int main(){
    cin >> T;
    while (T--){
        for (int i=1;i<=N;i++)
            arr[i].clear();
        fill(&cnt[0],&cnt[104],0);
        cin >> N >> M;
        for (int i=0;i<M;i++){
            ll a, b, c;
            cin >> a >> b >> c;
            arr[a].push_back({c,b});
            arr[b].push_back({c,a});
        }
        BFS();
        cin >> hu;
        for (int i=0;i<hu;i++){
            ll a;
            cin >> a;
            for (int j=1;j<=N;j++)
                cnt[j]+=visit[a][j];
        }
        pll ans={0,INF};
        for (int i=1;i<=N;i++){
            if (cnt[i]<ans.second){
                ans.first=i;
                ans.second=cnt[i];
            }
        }
        cout << ans.first << "\n";
    }
    return 0;
}