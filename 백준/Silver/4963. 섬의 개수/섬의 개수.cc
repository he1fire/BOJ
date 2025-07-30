#include <iostream>
#include <queue>
using namespace std;
int dir[8][2]={{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
int w, h, arr[51][51];
queue<pair<int, int> > Q;
int BFS () {
    int cnt=0;
    for (int i=0;i<h;i++)
        {
        for (int j=0;j<w;j++)
            {
            if (arr[i][j]==1)
                {
                cnt++;
                int x=i, y=j;
                Q.push(make_pair(x,y));
                arr[x][y]=0;
                while (!Q.empty())
                    {
                    x=Q.front().first;
                    y=Q.front().second;
                    Q.pop();
                    for (int k=0;k<8;k++)
                        {
                        int ax=x+dir[k][0];
                        int ay=y+dir[k][1];
                        if (ax>=h || ax<0 || ay>=w || ay<0)
                        continue;
                        if (arr[ax][ay]==1)
                            {
                            arr[ax][ay]=0;
                            Q.push(make_pair(ax,ay));
                            }
                        }
                    }
                }
            }
        }
    return cnt;      
    }
int main () {
    while (1)
        {
        cin >> w >> h;
        if (w==0 && h==0)
        break;
        for (int i=0;i<h;i++)
            {
            for (int j=0;j<w;j++)
            cin >> arr[i][j];
            }
        cout << BFS() << "\n";
        for (int i=0;i<h;i++)
            {
            for (int j=0;j<w;j++)
            arr[i][j]=0;
            }
        }
    return 0;
    }