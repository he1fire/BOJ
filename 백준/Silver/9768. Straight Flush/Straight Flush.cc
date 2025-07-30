#include <bits/stdc++.h>
#define ll long long
#define INF (1e9+7)
using namespace std;
ll T, N, M, K;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N >> M >> K;
        priority_queue<ll> pq[15];
        ll ans=0;
        for (int i=0;i<K;i++){
            ll a, b;
            cin >> a >> b;
            pq[b].push(a);
        }
        for (int i=1;i<=M;i++){
            ll tmp=-1, cnt=0;
            while (!pq[i].empty()){
                ll x=pq[i].top();
                pq[i].pop();
                if (tmp==-1 || tmp==x)
                    ;
                else if (x==tmp-1)
                    cnt++;
                else
                    cnt=0;
                ans=max(ans,cnt);
                tmp=x;
            }
        }
        cout << (ans ? ans+1 : 0) << "\n";
    }
    return 0;
}