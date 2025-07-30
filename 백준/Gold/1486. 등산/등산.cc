#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
int N, M, T, D, ans;
int arr[26][26], visit1[26][26], visit2[26][26], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
priority_queue<pair<int,pair<int,int> > > pq;
void DIK() {
    fill(&visit1[0][0],&visit1[25][26],-1);
    fill(&visit2[0][0],&visit2[25][26],-1);
    visit1[0][0]=0;
    visit2[0][0]=0;
    pq.push({0,{0,0}});
    while (!pq.empty()){
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            int next=1;
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]>arr[x][y])
                next=pow(arr[ax][ay]-arr[x][y],2);
            if ((visit1[ax][ay]==-1 || visit1[ax][ay]>visit1[x][y]+next) && abs(arr[ax][ay]-arr[x][y])<=T){
                visit1[ax][ay]=visit1[x][y]+next;
                pq.push({-visit1[ax][ay],{ax,ay}});
            }
        }
    }
    pq.push({0,{0,0}});
    while (!pq.empty()){
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        for (int i=0;i<4;i++){
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            int next=1;
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]<arr[x][y])
                next=pow(arr[x][y]-arr[ax][ay],2);
            if ((visit2[ax][ay]==-1 || visit2[ax][ay]>visit2[x][y]+next) && abs(arr[ax][ay]-arr[x][y])<=T){
                visit2[ax][ay]=visit2[x][y]+next;
                pq.push({-visit2[ax][ay],{ax,ay}});
            }
        }
    }
}
int main () {
    cin >> N >> M >> T >> D;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            char a;
            cin >> a;
            a<97 ? arr[i][j]=a-65 : arr[i][j]=a-71;
        }
    }
    DIK();
    for (int i=0;i<26;i++){
        for (int j=0;j<26;j++){
            if (visit1[i][j]!=-1 && visit2[i][j]!=-1 && visit1[i][j]+visit2[i][j]<=D)
                ans=max(ans,arr[i][j]);
        }
    }
    cout << ans;
    return 0;
}