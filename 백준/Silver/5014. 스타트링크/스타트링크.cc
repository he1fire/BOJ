#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int F, S, G, U, D;
vector<int> visit;
queue<int> Q;
int BFS () {
    int x=0;
    visit=vector<int> (F+1,-1);
    Q.push(S);
    visit[S]=0;
    while (!Q.empty())
        {
        x=Q.front();
        Q.pop();
        if (x==G)
        break;
        int ux=x+U;
        if (ux<=F && visit[ux]==-1)
            {
            visit[ux]=visit[x]+1;
            Q.push(ux);
            }
        int dx=x-D;
        if (dx>=1 && visit[dx]==-1)
            {
            visit[dx]=visit[x]+1;
            Q.push(dx);
            }
        }
    if (visit[G]!=-1)
    return visit[G];
    else
    return -1;
    }
int main () {
    cin >> F >> S >> G >> U >> D;
    int res=BFS();
    res!=-1 ? cout << res : cout <<"use the stairs";
    return 0;
    }