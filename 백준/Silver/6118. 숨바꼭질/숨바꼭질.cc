#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int N, M, visit[20005], ans, dis, cnt;
vector<int> arr[20005];
queue<int> q;
void BFS(){
    fill(&visit[0],&visit[20004],-1);
    q.push(1);
    visit[1]=0;
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<arr[x].size();i++){
            int ax=arr[x][i];
            if (visit[ax]==-1){
                visit[ax]=visit[x]+1;
                q.push(ax);
            }
        }
    }
}
int main() {
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    BFS();
    for (int i=1;i<=N;i++){
        if (visit[i]>dis){
            dis=visit[i];
            ans=i;
            cnt=1;
        }
        else if (visit[i]==dis)
            cnt++;
    }
    cout << ans << " " << dis << " " << cnt;
    return 0;
}