#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
ll dir0[6][2]={{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{1,-1}}, dir1[6][2]={{0,-1},{0,1},{-1,0},{1,0},{-1,1},{1,1}};
string arr[55];
ll f(int x, int y){
    ll ret=0;
    if (x%2==0){
        for (int i=0;i<6;i++){
            int ax=x+dir0[i][0], ay=y+dir0[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]=='.')
                ret++;
        }
    }
    else{
        for (int i=0;i<6;i++){
            int ax=x+dir1[i][0], ay=y+dir1[i][1];
            if (ax<0 || ax>=N || ay<0 || ay>=M)
                continue;
            if (arr[ax][ay]=='.')
                ret++;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie();
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (arr[i][j]=='#')
                ans+=f(i,j);
        }
    }
    cout << ans;
    return 0;
}