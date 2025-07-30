#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ab{
    ll x, idx;
    bool operator<(const ab& other) const {
        return x < other.x;
    }
};
ll N, M;
priority_queue<ab> pq;
ab mx;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    for (int i=1;i<=M;i++){
        ll a;
        cin >> a;
        pq.push({a,i});
    }
    mx=pq.top();
    pq.pop();
    if (mx.x>(N+1)/2)
        cout << "-1";
    else{
        while (1){
            cout << mx.idx << " ";
            if (--mx.x==0)
                break;
            ab tp=pq.top();
            pq.pop();
            cout << tp.idx << " ";
            if (--tp.x)
                pq.push(tp);
        }
        while (!pq.empty()){
            ab tp=pq.top();
            pq.pop();
            cout << tp.idx << " ";
            if (--tp.x)
                pq.push(tp);
        }
    }
    return 0;
}