#include <iostream>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}}, arr[505][505], visit[505][505];
struct ABC{
    int a, b, x;
    ABC() {}
    ABC(int a, int b, int x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    return a.x > b.x;
}
int main () {
    priority_queue<ABC> pq;
    int N, ans=0;
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            int x;
            cin >> x;
            arr[i][j]=x;
            pq.push(ABC(i,j,x));
        }
    }
    while (!pq.empty()){
        int x=pq.top().a, y=pq.top().b, now=0;
        pq.pop();
        for (int i=0;i<4;i++){
            int dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=N || dy<0 || dy>=N)
                continue;
            if (arr[dx][dy]<arr[x][y])
                now=max(now,visit[dx][dy]+1);
        }
        visit[x][y]=now;
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
            ans=max(ans,visit[i][j]);
    }
    cout << ans+1;
    return 0;
}