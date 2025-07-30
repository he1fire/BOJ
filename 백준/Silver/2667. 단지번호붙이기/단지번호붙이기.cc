#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int N, visit[26][26];
string adj[26];
vector<int> house;
queue<pair<int, int> > Q;
int BFS () {
    for (int i=0;i<N;i++)
        {
        for (int j=0;j<N;j++)
            {
            if (adj[i][j]=='1' && visit[i][j]==0)
                {
                int x=i, y=j, cnt=0;
                Q.push(make_pair(x,y));
                visit[x][y]=1;
                while (!Q.empty())
                    {
                    cnt++;
                    x=Q.front().first;
                    y=Q.front().second;
                    Q.pop();
                    for (int k=0;k<4;k++)
                        {
                        int ax=x+dir[k][0];
                        int ay=y+dir[k][1];
                        if (ax<0 || ax>=N || ay<0 || ay>=N)
                        continue;
                        if (adj[ax][ay]=='1' && visit[ax][ay]==0)
                            {
                            visit[ax][ay]=1;
                            Q.push(make_pair(ax,ay));
                            }
                        }
                    }
                house.push_back(cnt);
                }
            }
        }
    sort (house.begin(),house.end());
    cout << house.size() << "\n";
    for (int i=0;i<house.size();i++)
    cout << house[i] << "\n";
    return 0;
    }
int main () {
    cin >> N;
    for (int i=0;i<N;i++)
    cin >> adj[i];
    BFS();
    return 0;
    }