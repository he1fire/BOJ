#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll T, N, M, arr[15][2005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i=1;i<=10;i++){
        for (int j=1;j<=2000;j++){
            ll cnt=0;
            for (int k=1;k<=j/2;k++){
                cnt+=arr[i-1][k];
            }
            if (i==1)
                cnt=1;
            arr[i][j]=cnt;
        }
    }
    cin >> T;
    while (T--){
        cin >> N >> M;
        ll ans=0;
        for (int i=1;i<=M;i++){
            ans+=arr[N][i];
        }
        cout << ans << "\n";
    }
    return 0;
}