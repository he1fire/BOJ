#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans;
ll dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
string arr[20];
ll f(ll x, ll y, ll depth){
    ll ret=0;
    for (int i=0;i<=7;i++){
        ll chk=1;
        for (int j=-i;j<=i;j++){
            if (x+j<0 || x+j>=N || y+j<0 || y+j>=M || arr[x+j][y]!='#' || arr[x][y+j]!='#')
                chk=0;
        }
        if (chk){
            for (int j=-i;j<=i;j++){
                arr[x+j][y]='.';
                arr[x][y+j]='.';
            }
            if (depth)
                ret=i*4+1;
            else{
                for (int j=0;j<N;j++){
                    for (int k=0;k<M;k++)
                        ret=max(ret,(i*4+1)*f(j,k,1));
                }
            }
            for (int j=-i;j<=i;j++){
                arr[x+j][y]='#';
                arr[x][y+j]='#';
            }
        }
        else
            break;
    }
    return ret;
}
int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++)
        cin >> arr[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++)
            ans=max(ans,f(i,j,0));
    }
    cout << ans;
    return 0;
}