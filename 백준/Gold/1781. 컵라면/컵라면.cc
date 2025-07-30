#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N, ans;
vector<ll> arr[200005];
priority_queue<ll> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N;i++){
        ll a, b;
        cin >> a >> b;
        arr[a].push_back(b);
    }
    for (int i=200000;i>0;i--){
        for (auto x:arr[i])
            pq.push(x);
        if (!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
    }
    cout << ans;
    return 0;
}