#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,ll> pll;
ll N, M, T, arr[105];
priority_queue<ll> pq;
queue<pll> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        ll cnt=1;
        fill(&arr[0],&arr[104],0);
        cin >> N >> M;
        for (int i=0;i<N;i++){
            ll a;
            cin >> a;
            q.push({a,i});
            pq.push(a);
        }
        while(!q.empty()){
            pll x=q.front();
            q.pop();
            if (x.first==pq.top()){
                pq.pop();
                arr[x.second]=cnt;
                cnt++;
            }
            else
                q.push(x);
        }
        cout << arr[M] << "\n";
    }
    return 0;
}