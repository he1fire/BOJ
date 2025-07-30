#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, M, ans, cnt[55];
vector<ll> arr;
priority_queue<ll> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cin >> M;
    for (int i=0;i<M;i++){
        ll a;
        cin >> a;
        pq.push(a);
    }
    while (!pq.empty()){
        ll mn=1e9+7, idx=-1, x=pq.top();
        pq.pop();
        for (int i=0;i<N;i++){
            if (arr[i]>=x && mn>cnt[i]){
                idx=i;
                mn=cnt[i];
            }
        }
        if (idx==-1){
            cout << "-1";
            return 0;
        }
        cnt[idx]++;
    }
    for (auto x:cnt)
        ans=max(ans,x);
    cout << ans;
    return 0;
}