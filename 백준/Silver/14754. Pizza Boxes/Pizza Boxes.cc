#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;
ll N, M, arr[1005][1005], ans;
set<pair<ll,ll>> S;
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> arr[i][j];
            ans+=arr[i][j];
        }
    }
    for (int i=0;i<N;i++){
        ll cnt=0, x=0, y=0;
        for (int j=0;j<M;j++){
            if (arr[i][j]>cnt){
                cnt=arr[i][j];
                x=i;
                y=j;
            }
        }
        S.insert({x,y});
    }
    for (int j=0;j<M;j++){
        ll cnt=0, x=0, y=0;
        for (int i=0;i<N;i++){
            if (arr[i][j]>cnt){
                cnt=arr[i][j];
                x=i;
                y=j;
            }
        }
        S.insert({x,y});
    }
    for (auto i:S)
        ans-=arr[i.first][i.second];
    cout << ans;
    return 0;
}