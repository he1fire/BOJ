#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll N, M, arr[105][105], ans=0;
    fill(&arr[0][0],&arr[104][105],0);
    cin >> N >> M;
    while (N--){
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i=x1;i<=x2;i++){
            for (int j=y1;j<=y2;j++){
                arr[i][j]++;
            }
        }
    }
    for (int i=1;i<=100;i++){
        for (int j=1;j<=100;j++){
            if (arr[i][j]>M)
                ans++;
        }
    }
    cout << ans;
    return 0;
}