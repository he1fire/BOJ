#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
struct ABC {
    int a, b, x;
    ABC() {}
    ABC(int a, int b, int x) : a(a), b(b), x(x) {}
};
bool operator<(ABC a, ABC b){
    return a.x > b.x;
}
int N, M, dir[4][2]={{1,0},{0,1},{0,-1},{-1,0}}, visit[105][105];
string arr[105];
priority_queue<ABC> pq;
void DIK() {
    pq.push(ABC(0,0,0));
    visit[0][0]=0;
    while(!pq.empty()){
        int x=pq.top().a, y=pq.top().b, now=pq.top().x;
        pq.pop();
        for (int i=0;i<4;i++){
            int dx=x+dir[i][0], dy=y+dir[i][1];
            if (dx<0 || dx>=M || dy<0 || dy>=N || visit[dx][dy]!=-1)
                continue;
            if (arr[dx][dy]=='1'){
                pq.push(ABC(dx,dy,now+1));
                visit[dx][dy]=now+1;
            }
            else{
                pq.push(ABC(dx,dy,now));
                visit[dx][dy]=now;
            }
        }
    }
}
int main () {
    fill(&visit[0][0],&visit[104][105],-1);
    cin >> N >> M;
    for (int i=0;i<M;i++)
        cin >> arr[i];
    DIK();
    cout << visit[M-1][N-1];
    return 0;
}