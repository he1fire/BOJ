#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll N;
priority_queue<ll, vector<ll>, greater<ll>> pq;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i=0;i<N*N;i++){
        ll a;
        cin >> a;
        if (pq.size()<N || a>=pq.top()){
            pq.push(a);
            if (pq.size()>N)
              pq.pop();
        }
    }
    cout << pq.top();
}