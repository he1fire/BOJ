#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ABC{
    ll num, dir; // 0은 상어, -1은 빈칸
    ABC() {};
    ABC(ll num, ll dir): num(num), dir(dir) {}
};
ABC arr[4][4];
ll ans;
ll dir[8][2]={{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1}};

ll Find(ll x){
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (arr[i][j].num==x)
                return i*4+j;
        }
    }
    return -1;
}

ll chk(ll x, ll y){
    ll dx=x+dir[arr[x][y].dir][0], dy=y+dir[arr[x][y].dir][1];
    if (dx<0 || dx>=4 || dy<0 || dy>=4)
        return 0;
    if (arr[dx][dy].num==0)
        return 0;
    swap(arr[x][y],arr[dx][dy]);
    return 1;
}

void fish(){
    for (int i=1;i<=16;i++){
        ll xy=Find(i), x=xy/4, y=xy%4;
        if (xy<0)
            continue;
        while (!chk(x,y))
            arr[x][y].dir=(arr[x][y].dir+1)%8;
    }
}

ll backtrack(){
    ll ret=0;
    ABC cp[4][4];
    copy(&arr[0][0],&arr[3][4],&cp[0][0]);
    fish();
    ll xy=Find(0), x=xy/4, y=xy%4;
    for (int i=1;i<4;i++){
        ll dx=x+dir[arr[x][y].dir][0]*i, dy=y+dir[arr[x][y].dir][1]*i;
        if (dx<0 || dx>=4 || dy<0 || dy>=4)
            continue;
        if (arr[dx][dy].num==-1)
            continue;
        ll tmp=arr[dx][dy].num, cnt=0;
        arr[x][y].num=-1;
        arr[dx][dy].num=0;
        cnt=tmp+backtrack();
        ret=max(ret,cnt);
        arr[x][y].num=0;
        arr[dx][dy].num=tmp;
    }
    copy(&cp[0][0],&cp[3][4],&arr[0][0]);
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin >> arr[i][j].num >> arr[i][j].dir;
            arr[i][j].dir--;
        }
    }
    ans+=arr[0][0].num;
    arr[0][0].num=0;
    ans+=backtrack();
    cout << ans;
    return 0;
}