#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, arr[2500][2500], ans[3];
void f(ll x, ll y, ll size){
    ll cnt[3]={0,};
    for (int i=x;i<x+size;i++){
        for (int j=y;j<y+size;j++){
            if (arr[i][j]==-1)
                cnt[0]++;
            if (arr[i][j]==0)
                cnt[1]++;
            if (arr[i][j]==1)
                cnt[2]++;
        }
    }
    if (cnt[0]==0 && cnt[1]==0)
        ans[2]++;
    else if (cnt[1]==0 && cnt[2]==0)
        ans[0]++;
    else if (cnt[0]==0 && cnt[2]==0)
        ans[1]++;
    else{
        ll dir[3]={0,size/3,size/3*2};
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                f(x+dir[i],y+dir[j],size/3);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    f(0,0,N);
    for (auto x:ans)
        cout << x << "\n";
    return 0;
}