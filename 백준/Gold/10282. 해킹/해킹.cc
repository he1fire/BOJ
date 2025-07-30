#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int,int> pii;
int T, N, M, S, visit[10005];
vector<pii> arr[10005];
priority_queue<pii, vector<pii>, greater<pii> > pq;
void DIK(){
    int cnt=0, ans=0;
    fill(&visit[0],&visit[10004],-1);
    pq.push({0,S});
    while (!pq.empty()){
        int curr=pq.top().first, x=pq.top().second;
        pq.pop();
        if (visit[x]!=-1)
            continue;
        visit[x]=curr;
        for (int i=0;i<arr[x].size();i++){
            int next=arr[x][i].first, ax=arr[x][i].second;
            if (visit[ax]==-1)
                pq.push({curr+next,ax});
        }
    }
    for (int i=1;i<=N;i++){
        if (visit[i]>=0){
            cnt++;
            ans=max(ans,visit[i]);
        }
    }
    cout << cnt << " " << ans << "\n";
}
int main () {
    cin >> T;
    while (T--){
        cin >> N >> M >> S;
        for (int i=0;i<M;i++){
            int a, b, c;
            cin >> a >> b >> c;
            arr[b].push_back({c,a});
        }
        DIK();
        for (int i=1;i<=N;i++)
            arr[i].clear();
    }
    return 0;
}