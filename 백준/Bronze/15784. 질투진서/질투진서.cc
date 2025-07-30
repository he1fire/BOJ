#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, x, y, arr[1005][1005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> x >> y;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    ll ans=1;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if ((i==x-1 || j==y-1) && arr[i][j]>arr[x-1][y-1])
                ans=0;
        }
    }
    cout << (ans ? "HAPPY" : "ANGRY");
    return 0;
}