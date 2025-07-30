#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[3005][3005], x[3005][3005], y[3005][3005], ans;
ll stx, sty, edx, edy;
string S;
ll f(){
    char dir[4]={'U','D','L','R'};
    ll ret=0, idx=-1;
    if (stx>1 && ret<x[stx-1][edy]-x[stx-1][sty-1]){
        idx=0;
        ret=x[stx-1][edy]-x[stx-1][sty-1];
    }
    if (edx<N && ret<x[edx+1][edy]-x[edx+1][sty-1]){
        idx=1;
        ret=x[edx+1][edy]-x[edx+1][sty-1];
    }
    if (sty>1 && ret<y[edx][sty-1]-y[stx-1][sty-1]){
        idx=2;
        ret=y[edx][sty-1]-y[stx-1][sty-1];
    }
    if (edy<N && ret<y[edx][edy+1]-y[stx-1][edy+1]){
        idx=3;
        ret=y[edx][edy+1]-y[stx-1][edy+1];
    }
    if (ret){
        S+=dir[idx];
        if (idx==0)
            stx--;
        else if (idx==1)
            edx++;
        else if (idx==2)
            sty--;
        else
            edy++;
        ans+=ret;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            cin >> arr[i][j];
            y[i][j]=arr[i][j]+y[i-1][j];
            x[i][j]=arr[i][j]+x[i][j-1];
        }
    }
    stx=sty=N/2;
    edx=edy=N/2+1;
    while (f());
    cout << ans << "\n" << S;
    return 0;
}