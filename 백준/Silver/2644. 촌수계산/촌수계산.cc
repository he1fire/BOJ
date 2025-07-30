#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M, S, F, adj[101][101];
vector<int> visit(101,-1);
queue<int> Q;
int BFS () {
    int x=S;
    Q.push(x);
    visit[x]=0;
    while (!Q.empty())
        {
        x=Q.front();
        Q.pop();
        if (x==F)
        break;
        for (int i=1;i<=100;i++)
            {
            if (adj[x][i]==1 && visit[i]==-1)
                {
                visit[i]=visit[x]+1;
                Q.push(i);
                }
            }
        }
    return visit[F];
    }
int main () {
    cin >> N >> S >> F >> M;
    for (int i=0;i<M;i++)
        {
        int a, b;
        cin >> a >> b;
        adj[a][b]=1;
        adj[b][a]=1;
        }
    cout << BFS();
    return 0;
    }