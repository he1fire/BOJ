#include <iostream>
#include <queue>
using namespace std;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int DIK(int N){
    int arr[126][126]={0}, visit[126][126]={0};
    priority_queue<pair<int,pair<int,int> > > pq;
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cin >> arr[i][j];
    }
    for (int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            visit[i][j]=-1;
    }
    visit[0][0]=arr[0][0];
    pq.push(make_pair(-arr[0][0],make_pair(0,0)));
    while (!pq.empty()){
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        int w=pq.top().first;
        if (visit[N-1][N-1]!=-1)
            break;
        pq.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=N)
                continue;
            if (visit[ax][ay]==-1){
                visit[ax][ay]=visit[x][y]+arr[ax][ay];
                pq.push(make_pair(-visit[ax][ay],make_pair(ax,ay)));
            
            }
        }
    }
    return visit[N-1][N-1];
}
int main() {
    for (int i=1;1;i++){
        int N;
        cin >> N;
        if (!N)
            break;
        cout << "Problem " << i << ": " << DIK(N) << "\n";
    }
    return 0;
}