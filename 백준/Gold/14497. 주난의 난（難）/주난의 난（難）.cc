#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int N, M, a, b, c, d, dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
string arr[305];
queue<pair<int,int> > q;
int BFS() {
    int cnt=0;
    while (arr[c-1][d-1]=='#'){
        vector<pair<int, int> > v;
        int visit[505][505]={0};
        cnt++;
        q.push({a-1,b-1});
        while (!q.empty()){
            int x=q.front().first, y=q.front().second;
            q.pop();
            for (int i=0;i<4;i++){
                int dx=x+dir[i][0], dy=y+dir[i][1];
                if (dx<0 || dx>=N || dy<0 || dy>=M || visit[dx][dy]==1)
                    continue;
                visit[dx][dy]=1;
                if (arr[dx][dy]=='0')
                    q.push({dx,dy});
                else if (arr[dx][dy]=='1')
                    v.push_back({dx,dy});
                else
                    arr[dx][dy]='X';
            }
        }
        for (int i=0;i<v.size();i++)
            arr[v[i].first][v[i].second]='0';
    }
    return cnt;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> M;
    cin >> a >> b >> c >> d;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    cout << BFS();
}