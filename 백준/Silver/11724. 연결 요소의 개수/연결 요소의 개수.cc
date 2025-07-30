#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M, ans, visit[1005];
vector<int> v[1005];
queue<int> q;
void BFS(){
    for (int i=1;i<=N;i++){
        if (visit[i]==0){
            ans++;
            q.push(i);
            visit[i]=1;
            while (!q.empty()){
                int x=q.front();
                q.pop();
                for (int j=0;j<v[x].size();j++){
                    int ax=v[x][j];
                    if (visit[ax]==0){
                        q.push(ax);
                        visit[ax]=1;
                    }
                }
            }
        }
    }
}
int main () {
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    BFS();
    cout << ans;
    return 0;
}