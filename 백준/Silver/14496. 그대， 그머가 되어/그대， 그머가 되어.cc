#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int N, M, a, b, visit[1005];
vector<int> v[1005];
queue<int> q;
int BFS() {
    fill(&visit[0],&visit[1004],-1);
    q.push(a);
    visit[a]=0;
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int i=0;i<v[x].size();i++){
            int ax=v[x][i];
            if (visit[ax]==-1){
                q.push(ax);
                visit[ax]=visit[x]+1;
            }
        }
    }
    return visit[b];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> N >> M;
    for (int i=0;i<M;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cout << BFS();
}