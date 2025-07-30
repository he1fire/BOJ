#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M, cnt=0, visit[101];
vector<int> adj[101];
queue<int> Q;
int BFS () {
    int x=1;
    Q.push(x);
    visit[x]=1;
    while (!Q.empty())
        {
        x=Q.front();
        Q.pop();
        for (int i=0;i<adj[x].size();i++)
            {
            if(visit[adj[x][i]]==0)
                {
                visit[adj[x][i]]=1;
                Q.push(adj[x][i]);
                }
            }
        }
    for (int i=0;i<101;i++)
    if (visit[i])
    cnt++;
    return cnt-1;
    }
int main () {
    cin >> N >> M;
    for (int i=0;i<M;i++)
        {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        }
    cout << BFS();
    return 0;
    }