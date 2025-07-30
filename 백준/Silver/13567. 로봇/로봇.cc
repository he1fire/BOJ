#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    int N, M, x=0, y=0, cnt=0, dir=1;//1 동쪽 2 남쪽 3 서쪽 4 북쪽
    cin >> N >> M;
    for (int i=0;i<M;i++)
        {
        string a;
        int b;
        cin >> a >> b;
        if (a=="TURN")
            {
            if (b==0)
                {
                if (dir!=1)
                dir--;
                else
                dir=4;
                }
            else
                {
                if (dir!=4)
                dir++;
                else
                dir=1;
                }
            }
        else
            {
            if (dir==1)
            x+=b;
            else if (dir==2)
            y-=b;
            else if (dir==3)
            x-=b;
            else
            y+=b;
            }
        if (x>N || y>N || x<0 || y<0)
        cnt=-1;
        }
    cnt==0 ? cout << x << " " << y : cout << "-1";
    return 0;
    }