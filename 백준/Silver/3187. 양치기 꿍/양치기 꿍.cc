#include <iostream>
#include <string>
#include <queue>
using namespace std;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int N, M, visit[251][251], s=0, w=0;
string arr[251];
queue<pair<int,int> > Q;
int BFS () {
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<M;j++)
            {
            int as=0, aw=0;
            if (visit[i][j]==0 && arr[i][j]!='#')
                {
                Q.push(make_pair(i,j));
                visit[i][j]=1;
                }
            while(!Q.empty())
                {
                int x=Q.front().first;
                int y=Q.front().second;
                Q.pop();
                if (arr[x][y]=='k')
                as++;
                if (arr[x][y]=='v')
                aw++;
                for (int k=0;k<4;k++)
                    {
                    int ax=x+dir[k][0];
                    int ay=y+dir[k][1];
                    if (ax<0 || ax>=N || ay<0 || ay>=M)
                    continue;
                    if (visit[ax][ay]==0 && arr[ax][ay]!='#')
                        {
                        Q.push(make_pair(ax,ay));
                        visit[ax][ay]=1;
                        }
                    }
                }
            as>aw ? s+=as : w+=aw;
            }
        }
    cout << s << " " << w;
    return 0;
    }
int main () {
    cin >> N >> M;
    for (int i=0;i<N;i++)
    cin >> arr[i];
    BFS();
    return 0;
    }