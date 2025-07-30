#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int N, ans, visit[51][51];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
string arr[51];
priority_queue<pair<int,pair<int,int> > > PQ;
int BFS () {
    visit[0][0]=1;
    PQ.push(make_pair(-1,make_pair(0,0)));
    while (!PQ.empty())
        {
        int x=PQ.top().second.first;
        int y=PQ.top().second.second;
        PQ.pop();
        if (visit[N-1][N-1]!=0)
        break;
        for (int i=0;i<4;i++)
            {
            int ax=x+dir[i][0];
            int ay=y+dir[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=N)
            continue;
            if (visit[ax][ay]==0)
                {
                if (arr[ax][ay]=='0')
                visit[ax][ay]=visit[x][y]+1;
                if (arr[ax][ay]=='1')
                visit[ax][ay]=visit[x][y];
                PQ.push(make_pair(-visit[ax][ay],make_pair(ax,ay)));
                }
            }
        }
    return visit[N-1][N-1]-1;
    }
int main () {
    cin >> N;
    for (int i=0;i<N;i++)
    cin >> arr[i];
    cout << BFS();
    return 0;
    }