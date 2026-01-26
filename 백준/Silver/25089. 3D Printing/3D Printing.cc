#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
using namespace std;
ll N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (ll i=1;i<=N;i++){
        ll arr[4], cnt=0;
        fill(arr,arr+4,INF);
        for (ll j=0;j<3;j++){
            for (ll k=0,a;k<4;k++){
                cin >> a;
                arr[k]=min(arr[k],a);
            }
        }
        for (ll j=0;j<4;j++)
            cnt+=arr[j];
        cout << "Case #" << i << ": ";
        if (cnt<1000000)
            cout << "IMPOSSIBLE\n";
        else{
            cnt=1000000;
            for (ll j=0;j<4;j++){
                cout << min(cnt,arr[j]) << " ";
                cnt-=min(cnt,arr[j]);
            }
            cout << "\n";
        }
    }
    return 0;
}