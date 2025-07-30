#include <bits/stdc++.h>
#define ll long long
using namespace std;
int N, M, ans, visited[30], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
string arr[25];
void backtrack(int x, int y, int cnt) {
    visited[arr[x][y]-'A']=1;
    ans=max(ans,cnt);
    for (int i=0;i<4;i++){
        int dx=x+dir[i][0], dy=y+dir[i][1];
    if (dx<0 || dx>=N || dy<0 || dy>=M || visited[arr[dx][dy]-'A'])
        continue;
    backtrack(dx,dy,cnt+1);
    }
    visited[arr[x][y]-'A']=0;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for(int i=0;i<N;i++)
        cin >> arr[i];
    backtrack(0,0,1);
    cout << ans;
    return 0;
}
