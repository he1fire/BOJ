#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans, arr[10005][6], dir[6]={5,3,4,1,2,0};
ll backtrack(ll depth, ll x){
    ll ret=0;
    if (depth>=N)
        return 0;
    for (int i=0;i<6;i++){
        if (arr[depth][i]==x){
            ll y=arr[depth][dir[i]];
            ret+=backtrack(depth+1, y);
            if (x+y==11)
                ret+=4;
            else if (x==6 || y==6)
                ret+=5;
            else
                ret+=6;
        }
    }
    return ret;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<6;j++)
            cin >> arr[i][j];
    }
    for (int i=1;i<=6;i++)
        ans=max(ans,backtrack(0,i));
    cout << ans;
    return 0;
}