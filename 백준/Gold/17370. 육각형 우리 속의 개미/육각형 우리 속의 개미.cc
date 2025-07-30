#include <bits/stdc++.h>
#define ll long long
using namespace std; // 1=위 2=오른쪽위 3=오른쪽아래 4=아래 5=왼쪽아래 6=왼쪽아래
ll N, ans=0, arr[25], visit[100][100];
void backtrack(ll x, ll y, ll dir, ll cost) {
    if (cost>N)
        return;
    if (visit[x][y]==0)
        visit[x][y]=1;
    else{
        arr[cost]++;
        return;
    }
    int a=dir+1, b=dir-1;
    if (a>6)
        a-=6;
    if (b<1)
        b+=6;
    for (int i=1;i<=6;i++){
        if (i==a || i==b){
            if (i==1)
                backtrack(x+2,y,i,cost+1);
            if (i==2)
                backtrack(x+1,y+1,i,cost+1);
            if (i==3)
                backtrack(x-1,y+1,i,cost+1);
            if (i==4)
                backtrack(x-2,y,i,cost+1);
            if (i==5)
                backtrack(x-1,y-1,i,cost+1);
            if (i==6)
                backtrack(x+1,y-1,i,cost+1);
        }
    }
    visit[x][y]=0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    visit[48][50]=1;
    backtrack(50,50,1,0);
    cout << arr[N];
    return 0;
}
