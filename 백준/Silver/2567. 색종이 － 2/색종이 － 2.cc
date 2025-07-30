#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[105][105], dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
ll f(ll x, ll y){
    ll ret=0;
    for (int i=0;i<4;i++){
        ll ax=x+dir[i][0], ay=y+dir[i][1];
        if (!arr[ax][ay])
            ret+=1;
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        for (int i=a+1;i<a+11;i++){
            for (int j=b+1;j<b+11;j++)
                arr[i][j]=1;
        }
    }
    for (int i=1;i<101;i++){
        for (int j=1;j<101;j++){
            if (arr[i][j])
                ans+=f(i,j);
        }
    }
    cout << ans;
    return 0;
}