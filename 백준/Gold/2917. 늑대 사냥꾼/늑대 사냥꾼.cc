#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
struct ABC {
    int a, b, x;
    ABC() {}
    ABC(int a, int b, int x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    return a.x < b.x;
}
int N, M, ans;
string s[505];
int arr[505][505], visit[505][505], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
priority_queue<ABC> pq;
queue<pair<int,int> > q;
void BFS() {
    fill(&arr[0][0], &arr[504][505], -1);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (s[i][j]=='+'){
                q.push({i,j});
                arr[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]==-1){
                arr[ax][ay]=arr[x][y]+1;
                q.push({ax,ay});
            }
        }
    }
}
void DIK() {
    int edx=0, edy=0;
    fill(&visit[0][0], &visit[504][505], -1);
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (s[i][j]=='V'){
                pq.push(ABC(i,j,arr[i][j]));
                visit[i][j]=arr[i][j];
            }
            if (s[i][j]=='J')
                edx=i, edy=j;
        }
    }
    while(!pq.empty()){
        int x=pq.top().a;
        int y=pq.top().b;
        int now=pq.top().x;
        pq.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            int next=min(now,arr[ax][ay]);
            if (visit[ax][ay]==-1){
                visit[ax][ay]=next;
                pq.push(ABC(ax,ay,visit[ax][ay]));
            }
        }
        if (visit[edx][edy]!=-1)
            break;
    }
    cout << visit[edx][edy];
}
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++){
            cin >> s[i];
    }
    BFS();
    DIK();
    return 0;
}