#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
int N, M, visit[1005];
vector<pii> arr[1005], ans;
priority_queue<piii, vector<piii>, greater<piii> > pq;
void DIK() {
    fill(&visit[0],&visit[1004],-1);
    pq.push({0,{0,1}});
    while (!pq.empty()){
        int curr=pq.top().first, x=pq.top().second.first, y=pq.top().second.second;
        pq.pop();
        if (visit[y]!=-1)
            continue;
        visit[y]=curr;
        ans.push_back({x,y});
        for (int i=0;i<arr[y].size();i++){
            int next=arr[y][i].first, ax=arr[y][i].second;
            if (visit[ax]==-1)
                pq.push({curr+next,{y,ax}});
        }
    }
}
int main () {
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b, c;
        cin >> a >> b >> c;
        arr[a].push_back({c,b});
        arr[b].push_back({c,a});
    }
    DIK();
    cout << ans.size()-1 << "\n";
    for (int i=1;i<ans.size();i++)
        cout << ans[i].first << " " << ans[i].second << "\n";
    return 0;
}