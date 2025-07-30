#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, T, arr[1050][1050];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=M;j++){
            ll a;
            cin >> a;
            arr[i][j]=a+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }
    cin >> T;
    while (T--){
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1] << "\n";
    }
    return 0;
}