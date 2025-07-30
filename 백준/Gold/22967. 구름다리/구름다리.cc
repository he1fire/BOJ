#include <bits/stdc++.h>
#define ll long long
#define INF 1e9+7
#define MOD (ll)(1e9+7)
using namespace std;
typedef pair<ll,ll> pll;
ll N, arr[305][305], cnt[305];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N-1;i++){
        ll a, b;
        cin >> a >> b;
        arr[a][b]=arr[b][a]=1;
        cnt[a]++;
        cnt[b]++;
    }
    if (N*(N-1)/2<=2*(N-1)){
        cout << N*(N-1)/2-(N-1) << "\n1\n";
        for (int i=1;i<=N;i++){
            for (int j=i+1;j<=N;j++){
                if (!arr[i][j])
                    cout << i << " " << j << "\n";
            }
        }
    }
    else{
        ll mx=-1, idx=-1;
        for (int i=1;i<=N;i++){
            if (cnt[i]>mx){
                mx=cnt[i];
                idx=i;
            }
        }
        cout << (N-1)-mx << "\n2\n";
        for (int i=1;i<=N;i++){
            if (!arr[idx][i] && i!=idx){
                cout << idx << " " << i << "\n";
            }
        }
    }
    return 0;
}